from ament_index_python.packages import get_package_share_directory
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
import math
import tf_transformations
import numpy as np
from chrono_ros_interfaces.msg import CobraSpeedDriver

def quaternion_to_euler(qx, qy, qz, qw):
    quaternion = [qx, qy, qz, qw]
    euler = tf_transformations.euler_from_quaternion(quaternion)
    return euler  # Returns a tuple (roll, pitch, yaw)

def get_forward_direction(yaw):
    forward_x = math.cos(yaw)
    forward_y = math.sin(yaw)
    return forward_x, forward_y

def get_point_ahead(x0, y0, z0, forward_x, forward_y, distance):
    x_ahead = x0 + distance * forward_x
    y_ahead = y0 + distance * forward_y
    return x_ahead, y_ahead, z0

class WaypointNode(Node):
    def __init__(self):
        super().__init__('waypoint_node')
        
        # Read parameters
        self.path_file_name = self.declare_parameter('path_file_name', 'PATH.txt').get_parameter_value().string_value
        self.look_ahead_distance = self.declare_parameter('look_ahead_distance', 4.0).get_parameter_value().double_value
        self.pid_p = self.declare_parameter('pid_parameters.p', 0.3).get_parameter_value().double_value
        self.pid_d = self.declare_parameter('pid_parameters.d', 0.005).get_parameter_value().double_value
        self.throttle = self.declare_parameter('default_throttle', 0.5).get_parameter_value().double_value
        
        # Initialize previous error and time
        self.previous_heading_error = 0.0
        self.last_time = self.get_clock().now()
        
        self.get_logger().info(f"file name to ({self.path_file_name})")
        self.get_logger().info(f"la to ({self.look_ahead_distance})")
        self.get_logger().info(f"p to ({self.pid_p})")
        self.get_logger().info(f"d to ({self.pid_d})")
        
        # Subscription to current_pose
        self.subscription = self.create_subscription(
            PoseStamped,
            '/current_pose',
            self.pose_callback,
            10)
        self.subscription  # prevent unused variable warning

        # Publisher for target_point
        self.publisher = self.create_publisher(PoseStamped, 'target_point', 10)
        self.speed_driver_publisher = self.create_publisher(CobraSpeedDriver, '/input/driver_inputs', 10)

        # Read waypoints from file
        self.x_coords, self.y_coords, self.z_coords = self.read_waypoints(self.path_file_name)

    def pose_callback(self, msg):
        x0, y0, z0 = msg.pose.position.x, msg.pose.position.y, msg.pose.position.z
        qx, qy, qz, qw = msg.pose.orientation.x, msg.pose.orientation.y, msg.pose.orientation.z, msg.pose.orientation.w
        
        euler_angles = quaternion_to_euler(qx, qy, qz, qw)
        yaw = euler_angles[2]
        forward_x, forward_y = get_forward_direction(yaw)
        x_ahead, y_ahead, z_ahead = get_point_ahead(x0, y0, z0, forward_x, forward_y, self.look_ahead_distance)
        
        closest_waypoint = self.find_closest_waypoint(self.x_coords, self.y_coords, self.z_coords, x_ahead, y_ahead, z_ahead)

        # Calculate desired heading
        desired_heading = math.atan2(
            closest_waypoint[1] - y_ahead,
            closest_waypoint[0] - x_ahead
        )

        # Calculate heading error
        heading_error = desired_heading - yaw

        # Normalize the error to the range [-pi, pi]
        heading_error = (heading_error + math.pi) % (2 * math.pi) - math.pi

        # Calculate time difference
        current_time = self.get_clock().now()
        time_diff = (current_time - self.last_time).nanoseconds / 1e9  # Convert to seconds

        # Calculate derivative of heading error
        derivative_error = 0
        if time_diff > 0:
            derivative_error = (heading_error - self.previous_heading_error) / time_diff

        # PID controller with PD terms
        steering = self.pid_p * heading_error + self.pid_d * derivative_error
        steering = np.clip(steering, -1.0, 1.0)

        # Update previous error and time
        self.previous_heading_error = heading_error
        self.last_time = current_time

        # Create and publish CobraSpeedDriver message
        speed_driver_msg = CobraSpeedDriver()
        speed_driver_msg.steering = steering
        speed_driver_msg.speed = self.throttle  # Speed is always pi
        self.speed_driver_publisher.publish(speed_driver_msg)

        # Log the closest waypoint
        self.get_logger().info(f"Closest waypoint to ({x0}, {y0}, {z0}): {closest_waypoint}")

        # Publish the closest waypoint
        waypoint_msg = PoseStamped()
        waypoint_msg.header.stamp = self.get_clock().now().to_msg()
        waypoint_msg.header.frame_id = "world"
        waypoint_msg.pose.position.x, waypoint_msg.pose.position.y, waypoint_msg.pose.position.z = closest_waypoint
        self.publisher.publish(waypoint_msg)

    def read_waypoints(self, file_path):
        x_coords, y_coords, z_coords = [], [], []
        try:
            with open(file_path, 'r') as file:
                for line in file:
                    x, y, z = line.strip().split(' ')
                    x_coords.append(float(x))
                    y_coords.append(float(y))
                    z_coords.append(float(z))
            return x_coords, y_coords, z_coords
        except FileNotFoundError:
            self.get_logger().error(f"File not found: {file_path}")
            return [], [], []
        except Exception as e:
            self.get_logger().error(f"An error occurred: {e}")
            return [], [], []

    def find_closest_waypoint(self, x_coords, y_coords, z_coords, x0, y0, z0):
        min_distance = float('inf')
        closest_waypoint = None

        for x, y, z in zip(x_coords, y_coords, z_coords):
            distance = self.euclidean_distance(x, y, z, x0, y0, z0)
            if distance < min_distance:
                min_distance = distance
                closest_waypoint = (x, y, z)

        return closest_waypoint

    def euclidean_distance(self, x1, y1, z1, x2, y2, z2):
        return math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)


def main(args=None):
    rclpy.init(args=args)
    waypoint_node = WaypointNode()
    rclpy.spin(waypoint_node)
    waypoint_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
