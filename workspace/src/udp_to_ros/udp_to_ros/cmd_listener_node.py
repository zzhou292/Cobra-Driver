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
            
            self.ints_send = [0,0,0,0]
        
            
            if steer >= 0.0:
                self.ints_send[1] = (int)(steer)
            else:
            	self.ints_send[0] = -(int)(steer)
                
            
            self.ints_send[2] = (int)(throttle)
            self.ints_send[3] = (int)(brake)
            
            self.get_logger().info(f"Received ints: {self.ints_send[0]}, {self.ints_send[1]}, {self.ints_send[2]},{self.ints_send[3]}")
            self.send_to_arduino(self.ints_send)
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

