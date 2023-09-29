import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import onnxruntime as ort
import cv2
import numpy as np
import socket  # <-- Added this import for TCP functionality

class YOLOv5Detector(Node):

    def __init__(self):
        super().__init__('yolov5_detector')
        
        # Initialize cv_bridge
        self.bridge = CvBridge()

        # Load the ONNX model
        self.ort_session = ort.InferenceSession("/home/jason/Desktop/STUDY/Cobra-Driver/workspace/src/yolov5_ros2/yolov5_ros2/real.onnx",providers=["CUDAExecutionProvider"])

        # Create subscription to the raw image topic
        self.subscription = self.create_subscription(
            Image,
            'image_raw',
            self.listener_callback,
            10)
        self.subscription

        # TCP Configuration
        self.tcp_ip = "127.0.0.1"
        self.tcp_port = 1212
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect((self.tcp_ip, self.tcp_port))

    def listener_callback(self, msg):
        # Convert ROS Image message to OpenCV image
        cv_img = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        # Ensure image is 1280x704
        cv_img_resized = cv2.resize(cv_img, (1280, 704))
        
        cv_img_resized_rgb = cv2.cvtColor(cv_img_resized, cv2.COLOR_BGR2RGB)
        
        # Convert image to NCHW format and normalize to [0,1]
        img_tensor = np.transpose(cv_img_resized_rgb, (2, 0, 1)).astype(np.float16) / 255.0
        img_tensor = img_tensor.reshape(1, 3, 704, 1280).astype(np.float16)
        
        # Perform inference
        ort_inputs = {self.ort_session.get_inputs()[0].name: img_tensor}
        detections = self.ort_session.run(None, ort_inputs)[0]
        
        # Process and visualize detections
        for det in detections[0]:
            x_center, y_center, width, height, confidence = det[:5]
            class_probs = det[5:]
            class_id = np.argmax(class_probs)
            class_score = class_probs[class_id]
            
            if confidence * class_score > 0.5:
                x1 = int(x_center - width / 2)
                y1 = int(y_center - height / 2)
                x2 = int(x_center + width / 2)
                y2 = int(y_center + height / 2)

                cv2.rectangle(cv_img_resized, (x1, y1), (x2, y2), (0, 255, 0), 2)
                cv2.putText(cv_img_resized, f"Class {class_id} {confidence * class_score:.2f}", (x1, y1-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,0,0), 2)

        # Display the image with detections
        # cv2.imshow("Detections", cv_img_resized)
        # cv2.waitKey(1)

        # Send the processed image with detections over TCP
        img_data = cv2.imencode('.jpg', cv_img_resized)[1].tobytes()
        length = len(img_data)
        try:
            self.sock.sendall(length.to_bytes(4, byteorder='big'))
            self.sock.sendall(img_data)
        except:
            print("Failed to send data over TCP. Check the connection.")

    def __del__(self):
        self.sock.close()

def main(args=None):
    rclpy.init(args=args)
    node = YOLOv5Detector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
