import socket
import cv2
import numpy as np
import threading

BUFFER_SIZE = 65536*10
TIMEOUT = 5  # seconds

def receiver(TCP_PORT, window_name):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.bind(("0.0.0.0", TCP_PORT))
    sock.listen(1)
    print(f"Receiver on port {TCP_PORT} waiting for a connection...")
    
    conn, addr = sock.accept()
    print(f"Connection from {addr} on port {TCP_PORT}")
    conn.settimeout(TIMEOUT)  # set a timeout for recv operations

    try:
        while True:
            try:
                # Receive the length of the image data
                length_data = conn.recv(4)
                if not length_data:
                    print(f"Connection on port {TCP_PORT} closed.")
                    break

                length = int.from_bytes(length_data, byteorder='big')
                data = b""
                while len(data) < length:
                    remaining = length - len(data)
                    packet = conn.recv(min(BUFFER_SIZE, remaining))
                    if not packet:
                        break
                    data += packet

                # Convert to a numpy array and decode
                np_arr = np.frombuffer(data, np.uint8)
                img = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

                # Display image
                cv2.imshow(window_name, img)
                if cv2.waitKey(1) & 0xFF == ord('q'):
                    break

            except socket.timeout:
                print(f"Socket on port {TCP_PORT} timed out. Skipping current frame.")
                continue

    except KeyboardInterrupt:
        print(f"Receiver on port {TCP_PORT} interrupted.")
    finally:
        conn.close()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    t1 = threading.Thread(target=receiver, args=(1210, 'Received Image'))
    t2 = threading.Thread(target=receiver, args=(1212, 'Received Yolo Detections'))
    
    t1.start()
    t2.start()

    t1.join()
    t2.join()

