import serial
import socket
import struct

with serial.Serial('/dev/ttyACM0', 9600, timeout=10) as ser:

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
            if floats[1] > 0.01:
                throttle = int(floats[1]*100.0)
            else:
                throttle = -int(floats[2]*100.0)

            input_arr = [steer, throttle]
            packed_data = struct.pack('ii', *input_arr)
            ser.write(packed_data)
            print(f"Received data: {input_arr}")

        except KeyboardInterrupt:
            print("Receiver stopped by user.")
            break

    # Close the socket when done
    sock.close()
