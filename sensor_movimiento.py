#!/usr/bin/env python
import RPi.GPIO as GPIO
import time
import os
from time import gmtime, strftime
GPIO.setmode(GPIO.BCM)
PIR_PIN = 16
GPIO.setup(PIR_PIN, GPIO.IN)
try:
    while True:
        if GPIO.input(PIR_PIN):
            os.system("./foto_sensor.sh &")
            os.system("./sensorluz.py &")
            time.sleep(1)

except KeyboardInterrupt:
    print "has salido"
    GPIO.cleanup()
