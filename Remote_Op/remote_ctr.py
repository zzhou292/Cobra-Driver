import serial

with serial.Serial('/dev/ttyACM0', 9600, timeout=10) as ser:
    while True:
    	ser.write(bytes('20','utf-8'))
	ser.write(bytes('25','utf-8'))
	ser.write(bytes('\n','utf-8'))