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
            executable='yolo_detector'
        ),
        Node(
            package='velodyne',
            executable='velodyne-all-nodes-VLP16-launch.py'
        ),
        Node(
            package='rosapi',
            executable='rosapi_node'
        ),
        Node(
            package='rosbridge_server',
            executable='rosbridge_websocket'
        )
    ])

