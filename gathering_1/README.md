# Getting Started
### Materials: Computer, microcontroller (arduino, feather, etc.), USB to micro-USB cable.
### Objective: Communicate with your microcontroller and have it respond, first on your computer and then by turning on an LED.

#### Step 1: How to get set up
https://learn.adafruit.com/adafruit-feather-m0-adalogger/setup
There’s two pages ‘Arduino IDE setup’ and ‘Using with Arduino IDE’. Follow the first ‘Arduino IDE setup’, download the arduino software. Then, for the specific drivers go to the next page of the guide 'Using with Arduino IDE.' There is also an arrow at the end of the page that will take you to it. Make sure to go through the setup **step by step** to the end of each page.

#### Step 2: Getting started
1. On the arduino Integrated Development Environment (IDE) select **Help** then **Getting Started** otherwise use: https://www.arduino.cc/en/Guide/ArduinoUno 
2. Program: How do I code? What is the IDE vocab? What do the functions do?
   - On the arduino IDE select Help then Reference otherwise use: https://www.arduino.cc/reference/en/ 
3. 'Hello World'
    1. Open the Arduino IDE
    2. Within the curly brackets of *void setup()* type *Serial.print("Hello World");*
    
    ![Code](https://user-images.githubusercontent.com/52707386/75636160-38f38f80-5bd1-11ea-8749-c8b5e02a5b5c.png)
    *This code can be found above under gathering_1/**Hello_Wolrd.ino***
    3. Run the program by pressing the arrow next to the checkmark on the top left.
    4. Open the serial monitor by pressing ctrl+shift+M
       1. Did your message print?
       2. sometimes your program starts running before your microcontroller has had a chance to establish communication with your computer.     Therefore, try typing *delay(3000);* before your print command and try again.
       3. An alternative solution is to include a conditional statement that makes your program wait until communication has been established (look at example code).
### ->Example code for this exercise can be found in the file *Hello_World.ino*.<-
## Congratulations! You've succesfully communicated with your board!

4. 'Blink'
