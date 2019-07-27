# Pulse Width Modulation (PWM) and Analog vs. Digital Signals
### Materials: Potentiometer, LEDs, Feather board, resistors, breadboard, multimeter, wires, potentially some oscilloscopes
#### Objective: Learn about how power is sent, modulated, and interpreted by microcontrollers and electrical components.
1. Dim and brighten LED with ‘analog’ control.
   1. Recreate LED circuit with your board as the power supply.
![image](https://user-images.githubusercontent.com/52707386/61998579-04ca5600-b067-11e9-8cd6-5c3d1ca73482.png)
*Fritzing*
   2. Use analogWrite instead of digitalWrite to turn on the LED
      1. analogWrite() requires you input a pin and a value (e.g. analogWrite(12, 40);)

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


