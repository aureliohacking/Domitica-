#!/usr/bin/env python

import RPi.GPIO as GPIO
import time
import os
from time import gmtime, strftime
GPIO.setmode(GPIO.BCM)
PIR_PIN = 16
GPIO.setup(PIR_PIN, GPIO.IN)
GPIO.setup(17, GPIO.OUT)
GPIO.setup(27, GPIO.OUT)


try:
        while True:
                if GPIO.input(PIR_PIN):
                        GPIO.output(17, True)
                        GPIO.output(27, True)
                else:
                        GPIO.output(17, False)
                        GPIO.output(27, False)
except KeyboardInterrupt:
        print "quit"
        GPIO.cleanup()
