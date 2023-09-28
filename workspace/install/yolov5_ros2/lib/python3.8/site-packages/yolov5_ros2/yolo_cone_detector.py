import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import socket
import cv2
import numpy as np
import onnxruntime as ort

class YOLOv5Detector(Node):
    def __init__(self):
        super().__init__('yolov5_detector')
        self.bridge = CvBridge()

        # Load custom ONNX model using ONNX Runtime
        model_path = os.path.join("/home/sbel/Desktop/Cobra-Driver/workspace/src/yolov5_ros2/yolov5_ros2", 'real.onnx')
        self.ort_session = ort.InferenceSession(model_path, providers=['CPUExecutionProvider'])

        self.subscription = self.create_subscription(
            Image,
            'image_raw',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.publisher_ = self.create_publisher(Image, '/yolo/detections', 10)

        # TCP Configuration
        self.tcp_ip = "127.0.0.1"  # Modify IP address if needed
        self.tcp_port = 1212
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect((self.tcp_ip, self.tcp_port))

    def listener_callback(self, msg):
        cv_img = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        # Resize the image to 1280x704
        cv_img = cv2.resize(cv_img, (1280, 704))

        # Convert the image to a tensor format suitable for ONNX Runtime
        tensor_img = cv_img.transpose(2, 0, 1)  # Change from HWC to CHW
        tensor_img = tensor_img.astype('float32') / 255.0
        tensor_img = tensor_img[np.newaxis, :]  # Add a batch dimension
        tensor_img = tensor_img.astype('float16')  # Convert to float16
        ort_inputs = {self.ort_session.get_inputs()[0].name: tensor_img}
        results = self.ort_session.run(None, ort_inputs)

        # Depending on your ONNX model's output, adjust this section
        if len(results[0][0].shape) == 2:  # Grayscale
            results_img = results[0][0].astype(np.float32)
            results_img = cv2.cvtColor(results_img, cv2.COLOR_GRAY2BGR)
        elif len(results[0][0].shape) == 3:  # Color
            results_img = results[0][0].astype(np.float32).transpose(1, 2, 0)
        else:
            raise ValueError("Unexpected output shape from the model.")

        # Convert back to ROS image and publish
        results_img = (results_img * 255).clip(0, 255).astype(np.uint8)
        img_msg = self.bridge.cv2_to_imgmsg(results_img, "bgr8")
        self.publisher_.publish(img_msg)

        # Send the image data through TCP
        img_data = cv2.imencode('.jpg', results_img)[1].tobytes()
        length = len(img_data)
        try:
            self.sock.sendall(length.to_bytes(4, byteorder='big'))
            self.sock.sendall(img_data)
        except:
            print("Failed to send data over TCP. Check the connection.")

    def __del__(self):
        if hasattr(self, 'sock') and self.sock:
            self.sock.close()

def main(args=None):
    rclpy.init(args=args)
    node = YOLOv5Detector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
