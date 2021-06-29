<img src="https://user-images.githubusercontent.com/52707386/123524825-9f7fa500-d681-11eb-8fe6-452afc4e432d.png" width="100%">
<p align="right"><sup>  <a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_3">Back</a> |<a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5"> Next</a> | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup> Contents</sup></a>
<br/>
<sup>gathering_4</sup></p>


https://user-images.githubusercontent.com/52707386/122319796-f9d87300-ced5-11eb-9d81-0f1b2d4d9b79.mp4

# Sensors galore: gather information, add logic, visualize results

1. [Turn on an external LED with the board](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#1-turn-on-an-external-led-with-the-board)
2. [Hello World: using the serial monitor](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#2-hello-world-using-the-serial-monitor)
3. [Read an input with the board (button)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#3-read-an-input-with-the-board-button)
4. [Use input and logic to turn on an LED](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#4-use-input-and-logic-to-turn-on-an-led)
5. [Read from a sensor](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#5-read-from-a-sensor)
6. [Use sensor info to manipulate an LED](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#6-use-sensor-info-to-manipulate-an-led)
7. [Use any sensor in the kit](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#7-use-any-sensor-in-the-kit)
8. [Answers & hints](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/README(in%20progress).md#8-answers)

*Throughout this week's guide we will be going back to circuits completed in earlier sections to build on them. Make sure not to take them apart!*


### 1. Turn on an external LED with the board 

**Materials:** Jumper wires (included in kit), atleast 1 220Ω resistor (included in kit) [how to choose a resistor for your circuit (for the specifics of your LED, lookup 'Red LED datasheet' on google)](https://forum.digikey.com/t/choosing-the-correct-resistor-for-your-led/183), an LED (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Learn how to output signals with your board (0-5V signals).

**Instructions:**

<ol type="i">
  <li>Recreate the 'protected LED' circuit from 2 weeks ago</li>
  <img width="600" height="730" src="https://user-images.githubusercontent.com/52707386/122060687-a7e30080-cda2-11eb-98d6-3f520c1f8d04.jpg"> 
   </br><br>
  <li>Disconnect the red wire from the battery and connect it to Pin 22 on the board</li>
  <li>Disconnect the black wire from the battery and connect it to GND on the board</li>
  <li>Run the code example 'Blink' with <code>LED_BUILTIN</code> swapped out for <code>22</code> </li>
  <li>How is our board similar to a battery? How is it different?</li>
</ol>
<br>

### 2. Hello World: using the serial monitor

The serial monitor allows us to communicate with our board as a process is being run. The serial monitor can both show and read text. It can show us words and numbers and we can type in the serial monitor to send commands to our board. It is an invaluable tool for interacting with our board, whether to debug, read sensor values, send commands, etc.

*[History blurb on 'Hello, World!'](https://ozanerhansha.medium.com/on-the-origin-of-hello-world-61bfe98196d5)*

**Materials:** Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Learn how to open, and print to, the serial monitor.

**Instructions:**

<ol type="i">
  <li>Open the Arduino IDE and create a new sketch (Ctrl + N is the shortcut)</li>
  <li>Initialize the serial monitor by typing <code>Serial.begin(9600);</code> in the <code>void setup(){</code> section.</li>
  <li>Add a print statement after the previous line of code with any text you'd like. Traditionally, programmers first try <code>hello world</code>.</li>
  <img width="400" height="300" src="https://user-images.githubusercontent.com/52707386/123526100-7283c000-d68a-11eb-84fa-58a858607352.png"> 
  <br>
  <br>
  <li>Make sure the right board (Mega 2560) and the right port are selected</li>
  <img src="https://user-images.githubusercontent.com/52707386/123526291-be833480-d68b-11eb-9099-2015741f205e.jpg"> 
  <br>
  <br>
  <li>Upload your code (Ctrl + U or click on the right arrow below the header). Make sure the board is connected. <i>Keep the circuit from the last step intact, it won't affect this program.</i></li>
  <li>Open the serial monitor (Ctrl + Shift + M)</li>
  <b>Congratulations! You've joined millions of hobbyists and engineers in succesfully communicating with your device in code.</b>
  <i>Sometimes the print statement will not be visible in the serial monitor. Look at the end of this file for tips and tricks to make sure you're always able to read what you print to the serial monitor.</i>
</ol>
<br>

### 3. Read an input with the board (button)

We've used our digital I/O pins as I/**O**(output) when we used our board to control an external LED. Now, we will learn how to use them as **I**(input)/O to collect information.

**Materials:** Jumper wires (included in kit), a button (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Learn how to gather information with the board.

**Instructions:**

<ol type="i">
  <li>Replace the LED in the circuit your created in part 1 with a button. <i>Look at last week's gathering to see how to connect a button</i></li>
  <li>Open up the code you used to turn on the LED in part 1.</li>
  <li>Switch <code>pinMode(22, OUTPUT);</code> to <code>pinMode(22, INPUT);</code></li>
  <li>Switch <code>digitalWrite(22, HIGH);</code> to <code>serial.println(digitalRead(22));</code></li>
  <li>Upload the code</li>
  <li>Switch the black wire to 5v. We do this <i>after</i> we change the code so as to not send a voltage signal to a pin we programmed as OUTPUT (this causes problems).</li>
  <li>Open up the serial monitor (Ctrl + Shift + M), what do you see? Re-upload the code if you need to.</li>
  <li>Check out the information at the end on preventing noise/pulldowns.</li>
</ol>
<br>


### 4. Use input and logic to turn on an LED

Now that we know how to input and output information from/to our board, we will start adding some logic to manipulate the information passing through.

**Materials:** Jumper wires (included in kit), atleast 1 220Ω resistor (included in kit) [how to choose a resistor for your circuit](), an LED (included in kit), a button (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Tie inputs and outputs together to understand the flow of information and actuation (read an input, add logic to the information gathered, and turn on an LED with it).

**Instructions:**

<ol type='i'>
  <li>Recreate the circuit from part 1 on a seperate set of pins on the board. Keep the button circuit intact.</li>
  <li>Next, we need to add a conditional logic statement to turn on the LED when the button is pressed. What did we read on the serial monitor when reading for the button in part 3?</li>
  <li>Knowing what was received we can incorporate it into an <b>if</b> statement. 'If the button equals x reading, then turn on the LED.' Try and see if you can write this statement in Arduino before you look at the solution at the bottom. Here's a link to <a href="https://www.arduino.cc/reference/en/language/structure/control-structure/if/">conditional statements in Arduino.</a></li>
  <li>Upload your code and press the button to see if it works!</li>
</ol>
<br>


### 5. Read from a sensor

Having completed the schema of going from information in, logic, then information out, we will be going back to 'information in' with sensors.

*You can take apart your previous circuits for this portion*

**Materials:** Ultrasonic sensor (included in kit), Jumper wires (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Learn how different sensors are read by the IDE and learn how to capture this information for our own uses.

**Instructions:**

<ol type='i'>
  <li>Navigate to lesson 10 of the Elegoo PDF (Ultrasonic sensor module) on page 10.</li>
  <li>Follow the wiring diagram to connect the sensor module to the board.</li>
  <li>Install the necessary library. For information on how to do this checkout <a href="https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/libraries_how_to.md#how-to-add-libraries-to-the-arduino-ide">libraries_how_to</a>. Click on the hyperlink for <b>Zip</b> libraries. The HC-SR04 library for this sensor can be found in the Elegoo folder we downloaded under 'libraries.' For information on how to re-download the Elegoo files, checkout <a href="https://github.com/practicaltech/TechFest/blob/master/2021/gathering_1/README.md#2-download-elegoo-kit-guides-and-libraries">gathering_1</a></li>  
<img width="500" height="300" src="https://user-images.githubusercontent.com/52707386/123834636-7a2aab00-d8bc-11eb-83fd-447428a3f85c.png">
  <br>
  <br>
<img width="500" height="300" src="https://user-images.githubusercontent.com/52707386/123834964-d5f53400-d8bc-11eb-8f20-76955d6f24fa.jpg">
  <br>
  <li>From the same Elegoo file folder, go to 'code'>'Lesson 10 Ultraso...'>'SR04_Example', open the file and run the code. If prompted to make a file for the file, click yes.</li>
  <li>Run the code and open the serial monitor. How is the data presented in the serial monitor? Can you track what part of the code is printing this data?</li>
</ol>
<br>

### 6. Use sensor info to manipulate an LED

Just how we took the button reading to turn on an LED, we will use the ultrasonic sensor to do the same.

**Materials:** Ultrasonic sensor (included in kit), Jumper wires (included in kit), atleast 1 220Ω resistor (included in kit), an LED (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

**Objective:** Learn how to interpret and utilize data from different sensors.

**Instructions:**

<ol type='i'>
  <li>Look back on the code we built to turn on an LED at the press of a button.</li>
  <li>Combine the button>LED code with the example code for the ultrasonic sensor. What areas of the code do we need to modify? This is not easy, start piece by piece and be sure to checkout the hints at the end. Starting from the top, make sure you have all the declarations you need (libraries, pin numbers {that match the wiring}, variables).</li>
  <li>Test, troubleshoot, test, checkout the hints, troubleshoot, and test again!</li>
</ol>
<br>

### 7. Use any sensor in the kit

Now that you've succesfully troubleshooted through the use of a sensor in the kit (downloaded necessary files to run it, captured information with it, and utilized the information received from it) choose a different component from the kit and test it! As you get more comfortable integrating different components, you will see how they can interact with each other and be used for a variety of purposes. Good luck, you got this.

Relevant links:
1. [Elegoo files](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_1/README.md#2-download-elegoo-kit-guides-and-libraries)
2. [How to download libraries](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_4/libraries_how_to.md)
3. [Arduino operators for conditional statements (and, not, or, multiplication, etc.)](https://www.tutorialspoint.com/arduino/arduino_operators.htm)

<br>

### 8. Answers

#### 1. Turn on an external LED with the board

![Screenshot 2021-06-29 121212](https://user-images.githubusercontent.com/52707386/123839875-80238a80-d8c2-11eb-8a8f-a42a34e89ad3.png)

<br>Then swap <code>LED_BUILTIN</code> out for <code>22</code>

![InkedScreenshot 2021-06-29 121521_LI](https://user-images.githubusercontent.com/52707386/123840462-312a2500-d8c3-11eb-904e-712f1dbba4f2.jpg)

<br> Run the code

https://user-images.githubusercontent.com/52707386/122322170-e4654800-ced9-11eb-9a82-7d2d8731caa5.mp4

<div align="center"><i>Make sure the pin you connect to on the board matches that of the code!!!</i></div>

<br>

Our board is similar to a battery in the sense that it can provide power, yet it is different in that it can modulate that power, 0-5v, and it can receive, send , and manipulate information.

<br>

#### 2. Hello World: using the serial monitor

Information on printing 'hello world' to the serial monitor succesfully [here](https://github.com/practicaltech/TechFest/blob/master/2019/gathering_1/FAQ.md).

<br>

#### 3. Read an input with the board (button)

Noise in this case is any unintended voltage being read by our input pin. Unintended voltage, in this case, is any static or other signal that causes us to read voltages apart from what we're supplying. To prevent this, we connect the input pin to ground so that it reads 0 when we're not sending a signal to it. To do this, follow the guide and image below.

<p align="center"> 
  <img width="850" height="400" src="https://user-images.githubusercontent.com/52707386/123843299-9f241b80-d8c6-11eb-99c0-45c280928745.jpg"> 
  <br>
  <b><a href="https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button">Arduino wiring diagram and guide</a></b><br>Make sure you connect to pin 22 instead of the one in this wiring diagram 
   </br><br>
</p>
<br>

#### 4. 


<p align="right">Next | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5">gathering_5</a></b>
<br/>
Back | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_3">gathering_3</a></p>
</b><p align="center"><sup>2019-2021 Tech Fest | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup>Table of Contents</sup></a></p>
