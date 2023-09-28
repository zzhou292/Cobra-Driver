import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import socket
import cv2
import onnxruntime as ort

class YOLOv5Detector(Node):
    def __init__(self):
        super().__init__('yolov5_detector')
        self.bridge = CvBridge()

        # Load custom ONNX model using ONNX Runtime
        model_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'real.onnx')
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

        # Convert the image to a tensor format suitable for ONNX Runtime
        tensor_img = cv_img.astype('float32') / 255.0
        ort_inputs = {self.ort_session.get_inputs()[0].name: tensor_img}
        results = self.ort_session.run(None, ort_inputs)

        # Depending on your ONNX model's output, adjust this section
        results_img = results[0]

        # Convert back to ROS image and publish
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
