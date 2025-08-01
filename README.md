TASK 4 : IOT AIR QUALITY MONITOR

COMPANY:CODTECH IT SOLUTION

NAME:V.DHANUSHIYA

INTERN ID: CT04DH2000

DOMAIN:INTERNET OF THINGS

DURATION:4 WEEKS

MENTOR:NEELA SANTHOSH

This project is a part of the CodTech IoT Internship.
It demonstrates a simple air quality monitoring system using Arduino and a simulated MQ135 sensor (potentiometer) to read analog air quality levels. 
The values are displayed on a 16x2 LCD and also printed to the Serial Monitor to simulate cloud data upload.

 Project Overview

The goal of this task is to build a prototype that:

- Reads air quality data simulated as PPM values
- Displays live air quality on a 16x2 LCD screen
- Prints the data to the Serial Monitor to mimic cloud upload

 Components Used

- Arduino UNO
- 16x2 LCD Display (without I2C)
- Potentiometer (used to simulate the analog output of the MQ135 sensor)
- 220-ohm resistor (for LCD backlight)
- Breadboard
- Jumper wires

Circuit Description

1. The LCD is connected in 4-bit mode using Arduino digital pins 2 to 5 for data and pins 11 and 12 for control.
2. A potentiometer is used to adjust the contrast of the LCD via the VO pin.
3. Another potentiometer is used to simulate the MQ135 air quality sensor, connected to analog pin A0.
4. The backlight of the LCD is powered through a 220-ohm resistor.
5. The RW pin of the LCD is grounded to keep it in write mode.

Code Description

The Arduino sketch reads the analog value from pin A0, maps it to a range of PPM values (400 to 2000), and displays it on the LCD. The same value is also sent to the Serial Monitor to simulate cloud logging.

How to Run

1. Open the project in Tinkercad Circuits or upload the code to your Arduino IDE.
2. Power the circuit and rotate the simulated air quality potentiometer.
3. View the changing air quality values on the LCD and Serial Monitor.

Output Example

Air Quality:  
856 PPM

Serial Monitor Output:
Uploading to cloud: 856 PPM

Simulation Link: 

https://www.tinkercad.com/things/lzkiKijiSBd-iot-air-quality-monitor/editel?sharecode=9qqiX4Zb6NjjWfrZRzILe11EQA-f4ANwXQ8u-bjWg5k

Output:

<img width="1339" height="646" alt="Image" src="https://github.com/user-attachments/assets/d524fd38-9e74-47f7-aed7-fbc3621e4b10" />
