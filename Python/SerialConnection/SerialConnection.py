__author__ = 'Magnus Johansson'
#opens serial connection and writes incoming temperature value(or error message) to a file
import serial
import time
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=0)
while 1:
    with open('workfile', 'w') as f:
                try:
                        line = ser.readline()
                        if line == "OK":
                                line = ser.readline()
                                tempstr = 'Current temperature in Celsius :'
                                tempstr += line
                                f.write(tempstr)
                        else:
                                f.write(line);
                except ser.SerialTimeoutException:
                        f.write('Data could not be read')
    f.close()
    time.sleep(1)
