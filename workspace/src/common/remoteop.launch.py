import os
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
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
            ),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory('lidarslam'), 'launch', 'lidarslam.launch.py')
            )
        ),
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe'
        ),
        #Node(
        #    package='tcp_cam_sender',
        #    executable='tcp_cam_sender'
        #),
        Node(
            package='udp_to_ros',
            executable='udp_listener'
        ),
        #Node(
        #    package='yolov5_ros2',
        #    executable='yolo_detector'
        #),
        #Node(
        #    package='velodyne',
        #    executable='velodyne-all-nodes-VLP16-launch'
        #),
        Node(
            package='rosapi',
            executable='rosapi_node'
        ),
        Node(
            package='rosbridge_server',
            executable='rosbridge_websocket'
        ),
    ])

