import socket
import cv2
import numpy as np
import threading
import queue  # <-- Import this

BUFFER_SIZE = 65536*10
TIMEOUT = 5  # seconds

def receiver(TCP_PORT, q):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.bind(("0.0.0.0", TCP_PORT))
    sock.listen(1)
    print(f"Receiver on port {TCP_PORT} waiting for a connection...")

    conn, addr = sock.accept()
    print(f"Connection from {addr} on port {TCP_PORT}")
    conn.settimeout(TIMEOUT)

    try:
        while True:
            try:
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

                np_arr = np.frombuffer(data, np.uint8)
                img = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

                q.put(img)  # <-- Put the image into the queue

            except socket.timeout:
                print(f"Socket on port {TCP_PORT} timed out.")
                continue

    except KeyboardInterrupt:
        print(f"Receiver on port {TCP_PORT} interrupted.")
    finally:
        conn.close()

if __name__ == "__main__":
    q1 = queue.Queue()
    q2 = queue.Queue()

    t1 = threading.Thread(target=receiver, args=(1210, q1))
    t2 = threading.Thread(target=receiver, args=(1212, q2))

    t1.start()
    t2.start()

    try:
        while True:
            if not q1.empty():
                img1 = q1.get()
                cv2.imshow('Received Image', img1)

            if not q2.empty():
                img2 = q2.get()
                cv2.imshow('Received Yolo Detections', img2)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                break
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()