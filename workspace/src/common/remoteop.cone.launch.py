from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='tcp_cam_sender',
            executable='tcp_cam_sender'
        ),
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe'
        ),
        Node(
            package='udp_to_ros',
            executable='udp_listener'
        ),
        Node(
            package='yolov5_ros2',
            executable='yolo_cone_detector'
        )
    ])