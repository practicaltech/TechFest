<img src="https://user-images.githubusercontent.com/52707386/123175456-ad8db580-d436-11eb-936c-f43bb45d83f9.jpg" width="100%">
<p align="right"><sup>  <a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_2">Back</a> |<a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4"> Next</a> | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup> Contents</sup></a>
<br/>
<sup>gathering_3</sup></p>

# Tools of the trade: using a multimeter, reading schematics, buttons & switches

1. [Measuring voltage and resistance (multimeter)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_3/README.md#1-measuring-voltage-and-resistance-multimeter)
2. [Reading schematics (revisiting the circuit from last week)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_3/README.md#2-reading-schematics-revisiting-the-circuit-from-last-week)
3. [Blink your LED (buttons and switches)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_3/README.md#3-blink-your-led-buttons-and-switches)
4. [Answers](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_3/README.md#4-answers)



### 1. Measuring voltage and resistance (multimeter)

A multimeter is a tool used to measure resistance, voltage, and current (some also measure capacitance). It is invaluable for diagnosing systems and figuring out the characteristics of circuits. 
Our multimeter offers the ability to measure voltage in both alternating current (AC) systems and direct current (DC) systems. AC is denoted by the squiggly line above V and DC by the solid and dashed line. **We will be using DC for our testing.**

![cropmultimeter_LI (3)](https://user-images.githubusercontent.com/52707386/122595779-c7399200-d01d-11eb-80c1-b16a13869590.jpg)


**Materials:** multimeter, resistors (included in kit), 9v battery (included in kit), and jumper wires (included in kit).

**Objective:** Learn how a multimeter works by measuring a variety of electrical components.

**Instructions:**

<ol type="i">
  <li>Put in the 9v battery</li>
  <li>Connect the testing leads to the front of the multimeter (black in the center, red on the right)</li>
  <li>Set the multimeter to read for continuity (circled in cyan below)</li>
  <img width="600" height="300" src="https://user-images.githubusercontent.com/52707386/122596274-74aca580-d01e-11eb-9467-8e73136db208.jpg"> 
  
  Continuity tests to see if the circuit (path between the two testing leads in this case) is closed (can electricity run through it?).
  <li>Try testing a jumper wire, what does the multimeter read? What about a resistor? Try switching the dial to the other modes within resistance (Ω), what does the multimeter read?</li>
  <li>Turn the dial to read for DC voltage. Test the battery by placing the red lead on the positive terminal and the black lead on the negative terminal. What does your multimeter read? Try turning the dial to the different options available within DC voltage. How does the value change?</li>
</ol>

<br>

### 2. Reading schematics (revisiting the circuit from last week)

https://user-images.githubusercontent.com/52707386/122451703-4e730100-cf5d-11eb-801c-51644dc2431d.mp4

*In this simulation voltage is supplied by a power source, the power source symbol is different to that of a battery*

https://everycircuit.com/circuit/5845579776917504

<br>

**Materials:** Writing utensil, paper, red LED (included in kit), 2x220ohm resistors (included in kit), breadboard (included in kit), 9v battery (included in kit), and jumper wires (included in kit).

**Objective:** Understand how to read a simple schematic and translate that into a working circuit and vice versa.

**Instructions:**

<ol type="i">
  <li>Rebuild the circuit from last week</a></li>
  <br>
<p align="center"> 
  <img width="600" height="730" src="https://user-images.githubusercontent.com/52707386/122060687-a7e30080-cda2-11eb-98d6-3f520c1f8d04.jpg"> 
  <br>
   <b>'Protected LED' circuit </b><br> 
   </br><br>
</p>
   <li> Draw the circuit you've created using the symbols below. <i>Draw a line from the end of one component to the next to represent a wire connecting them.</i></li>
   <br>
<p align="center"> 
  <a href="https://learn.sparkfun.com/tutorials/how-to-read-a-schematic/all"><img width="900" height="400" src="https://user-images.githubusercontent.com/52707386/122452671-5aab8e00-cf5e-11eb-96ea-d670c83e5679.png" alt="Truncated schematic symbols"> </a>
  <br>
  <b>Spark Fun Schematic Guide <i>truncated</i></b><br> 
   </br><br>
</p>
   </ol>

<br>

### 3. Blink your LED (buttons and switches)

**Materials:** Button (included in kit), multimeter, red LED (included in kit), 2x220ohm resistors (included in kit), breadboard (included in kit), 9v battery (included in kit), and jumper wires (included in kit).

<p align="center"> 
  <img width="900" height="400" src="https://user-images.githubusercontent.com/52707386/122598873-48932380-d022-11eb-808b-70e3d9bd3394.jpg">
  <br>
  <i>This piece box is within the kit</i><br> 
   </br><br>
</p>

**Objective:** Understand how a button works and how to incorporate it into a circuit.

**Instructions:**

<ol type='i'>
  <li>Find out what the symbol for a 'NO button' is in a schematic. You will need to google this. In functionality, it is similar to the SPST switch in the key above.</li>
  From looking at the symbol, how does the button interact with a circuit? Look back to the elements of a circuit. What does a circuit need for electricity to flow through it?
  <li>Turn the dial on your multimeter to continuity. Use the multimeter to measure the resistance between pins on the button. What is the resistance between two that are opposing vs. two that are on the same side?</li>
  <img width="600" height="600" src="https://user-images.githubusercontent.com/52707386/122598709-0bc72c80-d022-11eb-9452-df97fef5b4c5.jpg">
  
  <li>Incorporate the button into the circuit you made previously. Does it matter where you place it? Which pins do you need to connect to?</li>
  <li>blink your led!</li>
</ol>

<br>


### 4. Answers

1.iv 

<p align="center"> 
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/122659536-01925480-d12e-11eb-9d80-4f6dc80f5454.jpg"> 
   </br>
   <b>Example showing how to place the multimeter leads for testing.</b><br> 
   </br><br>
</p>
The multimeter should read 0Ω for the jumper wire and 220Ω for the resistors we used for our circuit (the number will vary for different resistors). When you change the mode within Ω, you are changing the range that you are reading at. If the resistance value is too low or too high for the range you are reading at, the reading may be incomplete or missing.


<br>
<br>

1.v

The multimeter should read 9v or close to it. When you move the dial, the 9 will move some decimal places to the right or left as you read in kV, mV, etc.

2.ii

<p align="center"> 
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/122061318-3c4d6300-cda3-11eb-9e76-33493a32d96a.jpg"> 
   </br>
   <b>Drawing of the circuit (conventional) </b><br> 
   </br><br>
</p>
3.i
<p align="center"> 
  <img src="https://user-images.githubusercontent.com/52707386/122659836-a7df5980-d130-11eb-8da4-f411097ad8e5.png"> 
   </br>
   <b>NO pushbutton</b><br> 
   </br>
</p>
When pressed, the button will close the circuit and allow for current to flow. When left unpushed, the normally open (NO) button will create a gap in the circuit, preventing the flow of current.

<br>
<br>

3.ii

Pins that are opposing eachother under the button should have 0 resistance between them. Pins that are next to eachother should have a large resistance when the button is unpressed. To succesfully incorporate the button into our circuit, we will need to connect to pins that are next to eachother.

<br>

3.iii & 3.iv

It does not matter where you place the button in the system, it will still create a gap that can be closed when the button is pressed.

https://user-images.githubusercontent.com/52707386/122659986-27215d00-d132-11eb-978b-6b506326c1a2.mp4


<p align="right">Next | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4">gathering_3</a></b>
<br/>
Back | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_1">gathering_3</a></p>
</b><p align="center"><sup>2019-2021 Tech Fest | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup>Table of Contents</sup></a></p>
