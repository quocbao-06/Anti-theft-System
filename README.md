Anti-Theft System using Arduino

  * Overview
This project is a simple Anti-Theft Alarm System built using an Arduino microcontroller and an accelerometer sensor.
The system detects movement or vibration and triggers an alarm when unauthorized motion is detected.
It is designed as a basic embedded system project to demonstrate motion detection and alarm triggering using Arduino.

  * Hardware Components
Arduino Uno
Accelerometer Sensor (ADXL335 or similar)
Buzzer
2 LEDs
Resistors
Breadboard
Jumper wires
USB cable for power

  * How the System Works
1. The accelerometer continuously measures movement on the X, Y, and Z axes.
2. Arduino reads the analog signals from the sensor.
3. When the movement exceeds a predefined threshold:
    The buzzer activates
    The LEDs turn on
4. This indicates a potential theft or unauthorized movement.

  * Pin Connections
  Component	            Arduino Pin
Accelerometer X	          A0
Accelerometer Y	          A1
Accelerometer Z	          A2
LED 1	                    D7
LED 2	                    D6
Buzzer	                  D3

  * Features
Motion detection using accelerometer
Audible alarm using buzzer
Visual alert using LEDs
Simple and low-cost hardware design

  * Applications
Bike anti-theft alarm
Bag movement detection
Device tampering alert
Educational embedded system project
