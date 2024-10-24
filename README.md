# ArduinoUnoR3
Humidity &amp; Temp

DHT22 Sensor and LCD Display with Arduino
This project interfaces a DHT22 temperature and humidity sensor with a 16x2 LCD display using an Arduino Uno. The program reads humidity and temperature values from the DHT22 sensor and displays them on both the serial monitor and the LCD display.

Features:
Reads temperature and humidity data from a DHT22 sensor.
Displays real-time temperature and humidity on a 16x2 LCD.
Outputs data to the serial monitor for debugging.
Includes error handling if the sensor fails to read data.

Components:
Arduino Uno R3 (or compatible)
DHT22 sensor
16x2 LCD display (using LiquidCrystal library)
Jumper wires, breadboard

Pin Configuration:
DHT22 sensor is connected to digital pin 8.
LCD is connected as follows:
RS: Pin 12
EN: Pin 11
D4: Pin 5
D5: Pin 4
D6: Pin 3
D7: Pin 2

How to Use:
Connect the DHT22 sensor and LCD as per the wiring diagram.
Upload the code to the Arduino Uno.
View temperature and humidity data on the LCD and in the serial monitor.
