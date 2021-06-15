# The LED: an intro into your new best friend
1. [Turn 'ON' an LED (battery)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_2/README.md#1-turn-on-an-led-battery)
2. [Protect your LED (resistor)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_2/README.md#2-protect-your-led-resistors)
3. [Turn 'ON' an LED (Arduino)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_2/README.md#3-turn-on-an-led-arduino)
4. [The LED at work (Arduino)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_2/README.md#4-the-led-at-work-arduino)
5. [Answers](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_2/README.md#5-answers)


### 1. Turn 'ON' an LED (battery)
***Note:** Wear your safety glasses for this excercise and STOP as soon as you feel any heat building in the components*

***Note_2:** The solutions to these questions can be found at the end of this page*

**Materials:**

<img src="https://user-images.githubusercontent.com/52707386/121928799-61839800-ccf5-11eb-8662-337259e3e1e2.jpg" alt="Materials" width="500" height="500">

Safety glasses, 9v battery (included in kit), and a Red LED (included in kit)

<br>

**Objective:** Turn on the LED using the battery

Questions to ask while trying to do this:

<ol type="i">
  <li>How?</li>
  <li>Why are the two protrusions sticking out of the battery different shapes?</li>
  <li>Why are the two wires sticking out of the LED different sizes?</li>
</ol>

Once you get the LED to flash
<ol type="i">
  <li>Is it still turning on?</li>
  <li>Why does it eventually stop working?</li>
  <li>Are we missing anything?</li>
</ol>
<br>

### 2. Protect your LED (resistors)
***Note:** The solutions to these questions can be found at the end of this page*

<a href = ""><img src="https://user-images.githubusercontent.com/52707386/121986827-19dc2b00-cd4c-11eb-811c-c54624e559e8.jpg" alt="Resistors" width="500" height="500"></a>
<br>
<br>

**Materials:**

<img src="https://user-images.githubusercontent.com/52707386/122051807-da3c3000-cd99-11eb-837d-6c79cb8882b2.png" alt="Materials" width="440" height="580">

Safety glasses, 9v battery (included in kit), 2 jumper wires (included in kit), breadboard (included in kit), 2 x 220ohm resistors (included in kit), and a NEW Red LED (included in kit)

<br>

**Objective:** Turn on the LED using the battery, resistors, and breadboard

Questions to ask while trying to do this:

<ol type="i">
  <li>What is a breadboard and how does it work?</li>
  <li>What is a resistor and how does it work?</li>
  <li>How can I use the breadboard to connect my components together?</li>
</ol>
<br>

### 3. Turn 'ON' an LED (Arduino)
**Materials:** Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), USB to USB A/B cable (included in kit).

**Objective:** Turn the onboard light on and off at different time intervals.

**Instructions:**

<ol type="i">
  <li>Navigate to 'Lesson 2 Blink' on page 32 of the ELEGOO 'The Most Complete Starter Kit....'pdf. The page is 34 if taking into account the title and preface.</li>
  <li>Follow the guide</li>
  <li>Change the speed at which the LED blinks</li>
</ol>
<br>



### 4. The LED at work (Arduino)
**Materials:** Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), USB to USB A/B cable (included in kit), Red LED (included in kit), Resistors (included in kit), breadboard (included in kit), and jumper wires (included in kit).

**Objective:** Turn an external LED on and off using the Arduino Mega board.

**Instructions:**

<ol type="i">
  <li>Navigate to <a href="https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink">Arduino 'Blink'</a></li>
  <li>Follow the guide</li>
  <li>Change the speed at which the external LED blinks</li>
</ol>
<br>


### 5. Answers

<b> Excercise 1: LED + Batt </b>

<ol type="i">
  <li>Touch the 2 metal wires of the LED to the trminals of the 9v battery in the following orientation: long LED wire to circle, short LED wire to hexagon.</li>
  <li>They designate the two different terminals, positive (circle) and negative (hexagon)</li>
  <li>They designate the two different terminals, positive (longer) and negative (shorter)</li>
</ol>

<p align="center"> 
  <img src="https://user-images.githubusercontent.com/52707386/121984959-c0263180-cd48-11eb-9b23-3476ed5c24da.png" alt="LED + Battery" width="300" height="480">
  <br>
   <b>'Protected LED' circuit </b><br> 
   </br><br>
</p>

Once you get the LED to flash
<ol type="i">
  <li>It shouldn't be turning on anymore as it has been overloaded and fried.</li>
  <li>The LED fails because it can not handle the amount of current the battery is passing through it.</li>
</ol>
<br>

<b> Excercise 2: LED + Batt + Resistor </b>

<ol type="i">
  <li>A breadboard is a prototyping tool composed of strips of conductive metal. The conductive metal is arranged in numbered rows that you can access through the holes on the top. These allow for the <b>non-permanent</b> connection of two components. Some boards have additional strips running vertically along the sides. These are generally used for power and ground (the breadboard provided in our kit does not have the side strips).<p align="center"> 
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/61340000-405a5a00-a7f5-11e9-8d42-524e5a13269d.jpg"> 
   </br>
   <b>How to use a breadboard - Sparkfun </b><br> 
   </br><br>
</p>  </li>
  <li>A resistor, as its name hints, resists the flow of electricity through it. It is a useful component in moderating the amount of current that runs through a system. In our case, it is moderating the amount of current from our battery. Without it, the LED can not handle the output of the battery. Resistors are <b>non-polar</b>, meaning it does not matter what direction electricity is flowing through them. They are also additive components when connected in series. This means that if we connect two resistors in a line, their resistances add together (220ohm + 220ohm). Resistance of a resistor is measured in ohms. <p align="center"> 
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/122056582-939d0480-cd9e-11eb-9867-41afd1b52b00.png"> 
   </br>
   <b>Single Resistor vs. 2 Resistors in series </b><br> 
   </br><br>
</p>  </li>
</ol>

<b> Completed circuit </b>
<p align="center"> 
  <img width="600" height="730" src="https://user-images.githubusercontent.com/52707386/122060687-a7e30080-cda2-11eb-98d6-3f520c1f8d04.jpg"> 
  <br>
   <b>'Protected LED' circuit </b><br> 
   </br><br>
</p>
<br>

<p align="center"> 
  <img width="600" height="730" src="https://user-images.githubusercontent.com/52707386/122060109-24c1aa80-cda2-11eb-8210-fdad07033249.jpg"> 
   </br>
   <b>Drawing of the circuit (non-conventional) </b><br> 
   </br><br>
</p>
<br>

<p align="center"> 
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/122061318-3c4d6300-cda3-11eb-9e76-33493a32d96a.jpg"> 
   </br>
   <b>Drawing of the circuit (conventional) </b><br> 
   </br><br>
</p>
