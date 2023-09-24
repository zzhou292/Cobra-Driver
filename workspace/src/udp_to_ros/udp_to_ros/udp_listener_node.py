import socket
import rclpy
from rclpy.node import Node
import struct
import serial
import time

class UDPListenerNode(Node):
    def __init__(self):
        super().__init__('udp_listener_node')
        self.get_logger().info("UDP Listener Node is running...")
        self.udp_ip = "0.0.0.0"  # Listen to all interfaces
        self.udp_port = 1209     # You can change this as needed
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind((self.udp_ip, self.udp_port))
        
        # Serial setup
        BAUD_RATE = 115200
        PORT = "/dev/ttyACM1"
        TIMEOUT = 0.1
        self.arduino = serial.Serial(port=PORT,baudrate=BAUD_RATE,timeout=TIMEOUT)
        
        self.create_timer(0.1, self.listen_for_udp)

    def listen_for_udp(self):
        data, addr = self.sock.recvfrom(12) # Buffer size is 1024 bytes
        try:
            self.floats = struct.unpack('fff', data)
            self.steer = self.floats[0]*90.0
            self.throttle = self.floats[1]*100.0
            self.brake = self.floats[2]*100.0
            
            self.ints_send = [0,0,0,0]
        
            
            if self.floats[0] >= 0.0:
                self.ints_send[1] = (int)(self.steer)
            else:
            	self.ints_send[0] = -(int)(self.steer)
                
            
            self.ints_send[2] = (int)(self.throttle)
            self.ints_send[3] = (int)(self.brake)
            
            self.get_logger().info(f"Received ints: {self.ints_send[0]}, {self.ints_send[1]}, {self.ints_send[2]},{self.ints_send[3]}")
            self.send_to_arduino(self.ints_send)
        except Exception as e:
            self.get_logger().error(f"Failed to decode UDP data: {e}")
            
    def send_to_arduino(self, data):
        try:
            msg_size = struct.pack("<B",8)
            msg_data = struct.pack("<4H",*[data[0],data[1],data[2],data[3]])
            msg = b"".join([msg_size,msg_data])
            t0 = time.time()
            self.arduino.write(msg)
            t1 = time.time()
            self.get_logger().info("t1=%s,t2=%s,t3=%s,t4=%s,serial time=%s" % (data[0],data[1],data[2],data[3],str(t1-t0)))
        except Exception as e:
            self.get_logger().error(f"Failed to send data to Arduino: {e}")

    def __del__(self):
        if self.serial_conn:
            self.serial_conn.close()

def main(args=None):
    rclpy.init(args=args)
    node = UDPListenerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

