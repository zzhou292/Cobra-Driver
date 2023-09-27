# ros2_tcp_sender.py

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import socket

class TCPSender(Node):
    def __init__(self):
        super().__init__('tcp_sender')

        # TCP configuration
        self.tcp_ip = self.declare_parameter("tcp_ip", "127.0.0.1").value
        self.tcp_port = self.declare_parameter("tcp_port", 12345).value
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect((self.tcp_ip, self.tcp_port))

        # Subscription to compressed image topic
        self.subscription = self.create_subscription(
            CompressedImage,
            "/image_raw/compressed",
            self.callback,
            10)

    def callback(self, msg):
        # First, send the length of the image data
        length = len(msg.data)
        self.sock.sendall(length.to_bytes(4, byteorder='big'))
        
        # Send the actual image data
        self.sock.sendall(msg.data)

    def __del__(self):
        self.sock.close()

def main(args=None):
    rclpy.init(args=args)
    sender = TCPSender()
    rclpy.spin(sender)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

