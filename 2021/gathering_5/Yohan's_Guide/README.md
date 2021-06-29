# RGB Led Tutorial: PWM, Colorspaces and Loops
Here is a basic tutorial to introduce the idea of PWM, RGB colorspaces and loops in arduino. The first task is to follow the instructions to set up the arduino circuit and get everything working. After that, take a read through the code and try and fill in the parts that have been left blank as a challenge. You could also just mess around with the LED and try to get different colors/effects. 


### 1. Create the RGB LED Circuit
![arduino_pic](https://user-images.githubusercontent.com/8228324/122969592-d2145f80-d35a-11eb-9494-ada611176277.jpg)
![schematic_pic](https://user-images.githubusercontent.com/8228324/122969602-d3de2300-d35a-11eb-8b9d-0a1b2e7de60d.jpg)
![RGBPinOut](https://user-images.githubusercontent.com/8228324/122970213-9d54d800-d35b-11eb-8dca-03ed7bfb6fbf.png)



**Materials:** 3x 220 Ohm resistors, 1x 10K potentiometer (some assembly required), 1x RGB LED, 1x BreadBoard, 1x Arduino MEGA, 4x Jumper Wires

**Objective:** Connect the circuit together!

**Instructions:**

<ol type="i">
  <li>Remove the components from the box and make sure to insert the center knob of the potentiometer into the lower part.</li>
  <li>Connect the components together on the breadboard, note that the LONG LEG of the RGB led is the ground leg and should go to ground!</li>
  <li>When connecting the potentiometer, connect the blue leg of the RGB led to the single pin on the potentiometer, and a wire to one of the two pins on the other side.</li>
  <li> Connect all the jumper wires to the arduino, 7 for the blue leg, 6 for the green leg and 5 for the red leg.</li>
  <li> When you are done, make sure that your setup matches the schematic and image.</li>
</ol>

<br>

### 2. Upload and test the code

**Materials:** use the code found here: 

**Objective:** Test the circuit with the provided code samples

**Instructions:**

<ol type="i">
  <li>Connect the arduino to your computers USB port. Making sure that your port is set correctly and that you have the correct board set in the boards manager upload the code.</li>
   <li>If everything worked, the LED should be ON. try and twist the potentiometer and see that the LED changes color from yellow to white!</li>
  <li>Twist the potentiometer so that the LED is a white color. Then, following the instructions in the code, copy and paste the code blocks to change the LED effects.</li>
</ol>

<br>

### 3. Try out your own RGB code!
Try to write your own RGB code and make the led flash whatever colors you want (or flash in a different pattern). If you want, you could also try and fill in some of the 'missing' blocks of code (numbers 4 and 6) as a challenge.


### Some Helpful Explanations.

**1.How RGB colors work:** 
![ikf0N](https://user-images.githubusercontent.com/8228324/122971874-87e0ad80-d35d-11eb-98ea-445a30a4c4fa.jpg)

RGB refers to the mixing of the seperate red, green and blue colors to make the entire spectrum of colors. The picture (known as a color cube) shows what combinations of each Red, Green and Blue component makes another color. In the RGB led, there are actually three seperate LEDs, a red, green and blue LED, and by turning these on and off (or partially on) you can create different colors. Each LED can be turned to a different level between 0 and 255, where 0 is completely off, and 255 is completely on. To access each of these internal LEDs, we send a signal to one of the pins on the RGB led. For example, if you send a value of 255 to the red pin, 255 to the blue pin, and 0 to the green pin, you will get a mix of red and blue light which will result in the RGB led lighting up magenta!

**2.PWM VS Potentiometer:** 
If you twist the Potentiometer you can change the color of the RGB led from yellow to white. You can also get this same effect by using PWM (displayed in code block 2). PWM is when the arduino very quickly (100s of times per second) turns on and off its output voltage to approximate an increasing or decreasing voltage. When we output a value of 255 using the analogWrite function, we are basically telling the arduino to output a full 5V to the pin. If we use the analog write function to output 127 (255/2), we will be actually only be outputting 5V for half the time and whatever is at the other end (the RGB LED pin for example) will 'feel' like its getting half the voltage (5V/2) or 2.5 volts. Like this, we can input any number between 0 and 255 and receive any 'voltage' between 0 and 5V, just by the arduino changing how much time its turns on an output. This is in constrast to the potentiometer, which does not change the amoutn of time the output is on, but actually changes the voltage by changing the resistance in the circuit (you can check by using Kirchoffs laws: V= IR).
![pwm](https://user-images.githubusercontent.com/8228324/122971808-77303780-d35d-11eb-8b7b-1e7d88a3002d.gif)

**3.For Loops in Arduino:** 
For loops are quite simple in arduino, their basic syntax is explained here: https://www.arduino.cc/reference/en/language/structure/control-structure/for/ 
They are usually used to count up and down and do things a specicif number of times.







