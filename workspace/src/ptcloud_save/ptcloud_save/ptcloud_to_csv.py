import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py import point_cloud2
import numpy as np
import csv

class PointCloudToCSVNode(Node):
    def __init__(self):
        super().__init__('pointcloud_to_csv_node')
        self.subscription = self.create_subscription(
            PointCloud2,
            '/input_cloud',
            self.listener_callback,
            10)
        self.file_counter = 0  # Initialize counter for file naming

    def listener_callback(self, msg):
        # Convert PointCloud2 to an array
        pc_array = self.pointcloud2_to_array(msg)

        # Check if the array is empty or contains only zeros
        if not np.any(pc_array):
            self.get_logger().warn(f"Received an empty or all-zero point cloud. Skipping file write for this message.")
            return

        # Construct filename
        filename = f'output{self.file_counter}.csv'
        self.file_counter += 1  # Increment counter for next file

        # Write to CSV
        with open(filename, 'w', newline='') as csvfile:
            csvwriter = csv.writer(csvfile)
            csvwriter.writerow(['x', 'y', 'z', 'intensity'])
            for point in pc_array:
                csvwriter.writerow([point[0], point[1], point[2], point[3]])

        # Log file creation
        self.get_logger().info(f"PointCloud data written to {filename}")

    def pointcloud2_to_array(self, cloud_msg):
        # Convert PointCloud2 message to a list of namedtuples
        cloud_points = point_cloud2.read_points_list(cloud_msg, field_names=("x", "y", "z", "intensity"), skip_nans=True)

        # Convert the list of namedtuples to a numpy array
        return np.array([[point.x, point.y, point.z, point.intensity] for point in cloud_points])

def main(args=None):
    rclpy.init(args=args)
    node = PointCloudToCSVNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

