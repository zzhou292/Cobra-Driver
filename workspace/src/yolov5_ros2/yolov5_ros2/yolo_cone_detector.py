import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import socket
import torch
import cv2

class YOLOv5Detector(Node):
    def __init__(self):
        super().__init__('yolov5_detector')
        self.bridge = CvBridge()

        device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")

        # Load custom ONNX model
        model_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'real.onnx')
        self.model = torch.onnx.load(model_path).to(device)

        # Apply half precision if supported
        if device.type == 'cuda':
            self.model = self.model.half()

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
        
        # Convert the image to a tensor and perform inference (you may need to adjust preprocessing steps)
        tensor_img = torch.from_numpy(cv_img).float().div(255.0).unsqueeze(0)
        if torch.cuda.is_available():
            tensor_img = tensor_img.half()  # Use half precision if on GPU
        results = self.model(tensor_img)

        # The result processing might change based on the ONNX model's output
        # The below lines assume that your model's output can be processed similarly to the original YOLO
        results_img = results.render()[0]
        
        # Convert back to ROS image and publish if needed
        img_msg = self.bridge.cv2_to_imgmsg(results_img, "bgr8")
        self.publisher_.publish(img_msg)

        # Send the image data through TCP
        img_data = cv2.imencode('.jpg', results_img)[1].tobytes()  # encode as JPEG for efficient transfer
        length = len(img_data)
        try:
            self.sock.sendall(length.to_bytes(4, byteorder='big'))  # Send length of the image data
            self.sock.sendall(img_data)                             # Send actual image data
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
