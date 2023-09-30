from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import ThisLaunchFileDir
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription

def generate_launch_description():
    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [ThisLaunchFileDir(), '/../../../velodyne/share/velodyne/launch/velodyne-all-nodes-VLP16-launch.py']
            )
        ),
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
