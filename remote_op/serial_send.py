import serial
import socket
import struct
import sys

with serial.Serial('/dev/ttyACM0', 115200, timeout=10) as ser:

    # Define the UDP server address and port
    UDP_IP = "0.0.0.0"  # Listen on all available network interfaces
    UDP_PORT = 1209

    # Create a UDP socket
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Bind the socket to the specified address and port
    sock.bind((UDP_IP, UDP_PORT))

    print(f"UDP receiver listening on {UDP_IP}:{UDP_PORT}")

    while True:
        try:
            # Receive data (assuming each float is 4 bytes)
            data, addr = sock.recvfrom(12)  # 3 floats * 4 bytes each
            if len(data) != 12:
                print("Received data is not the expected length")
                continue

            # Unpack the received data into three floats
            floats = struct.unpack('fff', data)
            steer = (int)(floats[0]*90.0)
            throttle = 0
            if floats[1]>0.01:
                throttle = int(floats[1]*100.0)
            else:
                throttle = -int(floats[2]*100.0)
            
            steer_l = 0
            steer_r = 0
            gas = 0
            brake = 0
            
            if steer>=0:
            	steer_r = (int)(steer)
            else:
            	steer_l = -(int)(steer)
            	
            if throttle >= 0:
            	gas = (int)(throttle)
            else:
            	brake = -(int)(throttle)
             
            msg_size = struct.pack("<B",8)
            msg_data = struct.pack("<4H",*[steer_l,steer_r,gas,brake])
            msg = b"".join([msg_size,msg_data])
            print(sys.getsizeof(msg))
            ser.write(msg)
            
            print("t1="+str(steer_l))
            print("t2="+str(steer_r))
            print("t3="+str(gas))
            print("t4="+str(brake))

        except KeyboardInterrupt:
            print("Receiver stopped by user.")
            break

    # Close the socket when done
    sock.close()

