import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

import torch
import cv2

class YOLOv5Detector(Node):
    def __init__(self):
        super().__init__('yolov5_detector')
        self.bridge = CvBridge()
        
        device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")


        # Load YOLO model
        self.model = torch.hub.load('ultralytics/yolov5', 'yolov5l').to(device)
        
        self.subscription = self.create_subscription(
            Image,
            'image_raw',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.publisher_ = self.create_publisher(Image, '/yolo/detections', 10)

    def listener_callback(self, msg):
        cv_img = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        results = self.model(cv_img)
        
        # If you want to visualize results
        results_img = results.render()[0]
        # Convert back to ROS image and publish if needed
        img_msg = self.bridge.cv2_to_imgmsg(results_img, "bgr8")
        self.publisher_.publish(img_msg)

        # Process detections if needed
        # detections = results.xyxy[0].cpu().numpy()
        # TODO: Use detections, maybe publish them as a custom message

def main(args=None):
    rclpy.init(args=args)
    node = YOLOv5Detector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
