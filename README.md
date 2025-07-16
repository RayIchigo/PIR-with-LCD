# PIR Motion Detection with I2C LCD Display 

##  Description  
This project uses a PIR (Passive Infrared) motion sensor connected to an Arduino to detect movement. When motion is detected, the system displays a message on a 16x2 I2C LCD screen. It’s a basic project for beginners and can be extended later with more features.

##  Components Used  
- Arduino Uno
- PIR Motion Sensor 
- 16x2 LCD Display (I2C module)  
- Breadboard
- Jumper Wires

##  How It Works  
1. The PIR sensor detects motion (input).  
2. It sends a signal to the Arduino.  
3. The Arduino processes the signal.  
4. Based on the result:  
   - If motion is detected → the LCD displays `"Motion Detected!"`  
   - If no motion → the LCD displays `"No Motion"`  

##  Circuit Diagram  
You can find the circuit in the **files section** of this repository. 
