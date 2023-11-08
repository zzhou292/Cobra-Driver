from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    package_name = 'waypoint_seeker'  # Replace with your actual package name
    config_file_path = os.path.join(
        get_package_share_directory(package_name),
        'config_real.yaml'  # Assuming config.yaml is directly under the 'param' folder
    )

    waypoint_node = Node(
        package=package_name,
        executable='waypoint_control',  # Replace with your node's executable name
        name='waypoint_control',
        parameters=[config_file_path],
        output='screen'
    )

    # Launch Description
    return LaunchDescription([
        waypoint_node
    ])

