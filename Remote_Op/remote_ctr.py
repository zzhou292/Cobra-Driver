import serial

with serial.Serial('/dev/ttyACM0', 9600, timeout=10) as ser:
	while True:
		arr = [35, 50]
		ser.write(bytes(arr))
