# Prototyping materials and electronics
### Materials: 9v battery, computer, resistors of various resistances, breadboard, multimeter, safety glasses, LEDs, microcontroller (arduino, feather, etc.), USB to micro-USB cable.
#### Objective: Getting familiar with components regularly used in circuits and the testing equipment used to check them.
If you need help with circuit building, choosing resistors, and so forth for this particular project, the link below is very helpful.
https://learn.adafruit.com/adafruit-arduino-lesson-2-leds  
LED = Light Emitting Diode  
1. Light up an LED using a 9v battery, wires, a breadboard, and an LED.
   1. Breadboard: A way to prototype circuits without soldering.
<p align="center">
  <img width="660" height="500" src="https://user-images.githubusercontent.com/52707386/61340000-405a5a00-a7f5-11e9-8d42-524e5a13269d.jpg">  
   <b>How to use a breadboard - Sparkfun</b><br> 
   </br><br>
</p>
https://learn.adafruit.com/adafruit-feather-m0-adalogger/setup
There’s two pages ‘Arduino IDE setup’ and ‘Using with Arduino IDE’. Follow the first ‘Arduino IDE setup’, download the arduino software. Then, for the specific drivers go to the next page of the guide 'Using with Arduino IDE.' There is also an arrow at the end of the page that will take you to it. Make sure to go through the setup **step by step** to the end of each page.

#### Step 2: Getting started
1. On the arduino Integrated Development Environment (IDE) select **Help** then **Getting Started** otherwise use: https://www.arduino.cc/en/Guide/ArduinoUno 
2. Program: How do I code? What is the IDE vocab? What do the functions do?
   - On the arduino IDE select Help then Reference otherwise use: https://www.arduino.cc/reference/en/ 
3. 'Hello World'
    1. Open the Arduino IDE
    2. Within the curly brackets of *void setup()* type *Serial.print("Hello World");*
    3. Run the program by pressing the arrow next to the checkmark on the top left.
    4. Open the serial monitor by pressing ctrl+shift+M
       1. Did your message print?
       2. sometimes your program starts running before your microcontroller has had a chance to establish communication with your computer.     Therefore, try typing *delay(3000);* before your print command and try again.
       3. An alternative solution is to include a conditional statement that makes your program wait until communication has been established.
       4. Example code for this exercise can be found in the file *Hello_World.io*.
       5. Congratulations! You've succesfully communicated with your board!
4. 'Blink'

