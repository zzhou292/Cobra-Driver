import rclpy
from rclpy.node import Node
import struct
import serial
import time
from chrono_ros_interfaces.msg import CobraSpeedDriver  # Replace 'your_package' with your actual package name

class ROSListenerNode(Node):
    def __init__(self):
        super().__init__('ros_listener_node')
        self.get_logger().info("ROS Listener Node is running...")

        # Serial setup
        BAUD_RATE = 115200
        PORT = "/dev/ttyACM0"
        TIMEOUT = 0.1
        self.arduino = serial.Serial(port=PORT, baudrate=BAUD_RATE, timeout=TIMEOUT)

        # Subscribe to the driver inputs topic
        self.subscription = self.create_subscription(
            CobraSpeedDriver,
            '/input/driver_inputs',
            self.driver_input_callback,
            10)
        self.subscription  # prevent unused variable warning

    def driver_input_callback(self, msg):
        try:
            steer = msg.steering * 90.0
            throttle = msg.speed * 100.0
            brake = 0  # Brake is always 0 as per requirements

            # Prepare data for sending
            steer_int = int(steer) if steer >= 0 else -int(steer)
            throttle_int = int(throttle)
            brake_int = int(brake)
            data_to_send = [0, steer_int, throttle_int, brake_int]

            self.get_logger().info(f"Received: Steer={steer_int}, Throttle={throttle_int}, Brake={brake_int}")
            self.send_to_arduino(data_to_send)
        except Exception as e:
            self.get_logger().error(f"Error in driver input callback: {e}")

    def send_to_arduino(self, data):
        try:
            msg_size = struct.pack("<B", 8)
            msg_data = struct.pack("<4H", *data)
            msg = b"".join([msg_size, msg_data])
            t0 = time.time()
            self.arduino.write(msg)
            t1 = time.time()
            self.get_logger().info(f"Serial write time: {t1 - t0} seconds")
        except Exception as e:
            self.get_logger().error(f"Failed to send data to Arduino: {e}")

    def __del__(self):
        if self.arduino:
            self.arduino.close()

def main(args=None):
    rclpy.init(args=args)
    node = ROSListenerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

