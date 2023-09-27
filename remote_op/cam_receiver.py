# tcp_image_receiver.py

import socket
import cv2
import numpy as np

TCP_IP = "0.0.0.0"  # Listen on all interfaces
TCP_PORT = 12345

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.bind((TCP_IP, TCP_PORT))
sock.listen(1)

print("Waiting for a connection...")
conn, addr = sock.accept()
print(f"Connection from {addr}")

BUFFER_SIZE = 65536*5

try:
    while True:
        # Receive the length of the image data
        length_data = conn.recv(4)
        if not length_data:
            break
        length = int.from_bytes(length_data, byteorder='big')

        data = b""
        while len(data) < length:
            packet = conn.recv(BUFFER_SIZE)
            if not packet:
                break
            data += packet

        # Convert to a numpy array and decode
        np_arr = np.frombuffer(data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

        # Display image
        cv2.imshow('Received Image', img)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
finally:
    conn.close()
    cv2.destroyAllWindows()
