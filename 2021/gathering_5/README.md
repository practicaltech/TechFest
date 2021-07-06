<img src="https://user-images.githubusercontent.com/52707386/123524825-9f7fa500-d681-11eb-8fe6-452afc4e432d.png" width="100%">
<p align="right"><sup>  <a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4">Back</a> |<a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_6"> Next</a> | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup> Contents</sup></a>
<br/>
<sup>gathering_5</sup></p>

# Communication

1. [Signals (definition)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#1-signals)
2. [Digital (button revisited)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#2-digital)
3. [Analog (Part 1: button revisited)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#3-analog)
4. [Analog (Part 2: photocell)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#3-analog)
5. [Pseudo-analog]()
6. [PWM]()
7. [I2C]()
8. [SPI]()



### 1. Signals

<dl>
  <dt>Defition</dt>
    <dd>Signals are "time-varying 'quantities' which convey some sort of information. In electrical engineering the quantity that's time-varying is usually voltage (if not that, then usually current). So when we talk about signals, <b>just think of them as a voltage that's changing over time</b>" <a href="https://learn.sparkfun.com/tutorials/analog-vs-digital/all#:~:text=time-varying%20%22quantities%22%20which%20convey%20some%20sort%20of%20information.%20In%20electrical%20engineering%20the%20quantity%20that%27s%20time-varying%20is%20usually%20voltage%20(if%20not%20that%2C%20then%20usually%20current).%20So%20when%20we%20talk%20about%20signals%2C%20just%20think%20of%20them%20as%20a%20voltage%20that%27s%20changing%20over%20time.">(Spark Fun).</a></dd>
</dl>
<i>For our purposes, a signal is a change in voltage over time</i>
<br>

### 2. Digital

Digital is discrete and finite. When combined with our previous definition, a <b>digital signal</b> is a voltage that changes between a set of discrete values over time. Before we go any further with a definition, we'll go back to a circuit we put together last week to illustrate the concept.

**Materials:** Jumper wires (included in kit), a button (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit). 

**Objective:** Understand what type of signal we are receiving when we read a button press with our board.

**Instructions:**

<ol type="i">
  <li>Go back to the button circuit we put together last week. If you took it apart, replicate the circuit in the image below and upload the <a href="https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/Button_Pin8.ino">Button_Pin8</a> code above. Either download the file or copy the code to a new Arduino sketch.</li>
  <p align="center"> 
  <img width="700" height="500" src="https://user-images.githubusercontent.com/52707386/124528344-ce51f580-ddbc-11eb-8c1d-f18acb4423e2.jpg">
  <br>
    Button circuit with <b>Pin 8</b> reading (make sure the pin from the circuit matches the code)
   </br><br>
</p>

  <li>Open the serial monitor (Ctrl + Shift + M) and look at how each button press is read. What are the possible values? What does each represent in terms of voltage (<a href="https://github.com/practicaltech/TechFest/blob/master/2021/gathering_3/README.md#:~:text=When%20pressed%2C%20the%20button%20will%20close%20the%20circuit%20and%20allow%20for%20current%20to%20flow.%20When%20left%20unpushed%2C%20the%20normally%20open%20(NO)%20button%20will%20create%20a%20gap%20in%20the%20circuit%2C%20preventing%20the%20flow%20of%20current.">think back</a> to what a button does and what pressing it would cause in the circuit).</li>

<br>
01001000 01100101 01101100 01101100 01101111 00100000 01110100 01101000 01100101 01110010 01100101
<br>

### 3. Analog

Analog is continuous and infinite. An <b>analog voltage signal</b> can have any value within it's range. E.g. any number between 0 and 5 volts, such as 2.3456345v. To help illustrate the concept, sound and color are analog; there are an infinite number of frequencies and hues.

{button (analog read) -> photocell -> why are there only x amount of values -> PWM & Yohan's guide}

**Materials:** Photoresistor (included in kit), jumper wires (included in kit), a button (included in kit), breadboard (included in kit), Arduino Mega2560 (included in kit), computer (with Arduino IDE installed), and USB to USB A/B cable (included in kit).

  <p align="center"> 
    <img width="250" height="300" src="https://user-images.githubusercontent.com/52707386/124678471-6ad8ce00-de77-11eb-828e-799c14986964.jpg">
    <br>
    Photoresistor (photocell)
    </br><br>
   </p>
   
**Objective:** Understand the basics of what an analog signal is as well as how it differs from a digital signal.

**Instructions (Part 1):**

<ol type="i">
  <li>Go back to the circuit you put together in the previous step.</li>
  <li><b>Disconnect your board from your computer.</b> It is good practice to cutoff power to any electrical system while you're working on it. In our case, we don't want to output power to a pin that has been programmed to output power as well (this can damage components).</li>
  <li>Switch the input pin to an analog capable pin (a pin labeled A1, A2, etc.). I.e. switch the wire connecting to Pin 8 to a pin starting with A.</li>
  <p align="center"> 
    <img width="700" height="700" src="https://user-images.githubusercontent.com/52707386/124668245-6c00ff80-de65-11eb-988b-7535536c1dc5.png">
    <br>
    This is called a <b>pinout</b>. This is the <a href="https://store.arduino.cc/usa/mega-2560-r3">Mega 2560 Rev 3 Pinout</a> by Arduino. Pinouts are invaluable tools for learning where each pin is located and what it's capable of.
    </br><br>
   </p>
  <li>Make a copy of the code we used for the previous step.</li>
  <li>In the copy of the previous code:</li>
  <ul>
    <li>change <code>const int buttonPin = 8;</code> to <code>const int buttonPin = A(number you chose);</code></li>
  <li>change <code> buttonState = <b>digital</b>Read(buttonPin);</code> to <code> buttonState = <b>analog</b>Read(buttonPin);</code></li>
  </ul>
  <li>Upload the code (make sure the correct board and port are selected) and open the serial monitor.</li>
  <li>What values do you see when you press the button? How are they different from the values in the previous example?</li>
  <li>What do you need to change in the code for the on-board LED to light up?</li>
</ol>
<br>

**Instructions (Part 2):**

<ol type="i">
  <li>Disconnect your board from your computer.</li>
  <li>Replace the button in your circuit with a photoresistor.</li>
    <p align="center"> 
    <img width="700" height="500" src="https://user-images.githubusercontent.com/52707386/124677882-387aa100-de76-11eb-9e96-2aab95f4cc09.jpg">
    <br>
    Circuit with photoresistor (photocell) in place of button. Photoresistors are bi-directional, just like resistors.
    </br><br>
   </p>
  <li>Reconnect your board, upload your code (make sure port and board are selected and correct), and open the serial monitor.</li>
  <li>What values do you see on the serial monitor?</li>
  <li>Try covering the photoresistor with your hand. How do the values change? What is the ultimate range of values you can see? Can the printed value be any number between that range?</li>
  <li>Looking at the values printed on the serial monitor, is the signal received by the board analog or digital?</li>
 


<p align="right">Next | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_6">gathering_6</a></b>
<br/>
Back | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4">gathering_4</a></p>
</b><p align="center"><sup>2019-2021 Tech Fest | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup>Table of Contents</sup></a></p>
