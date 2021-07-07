<img src="https://user-images.githubusercontent.com/52707386/123524825-9f7fa500-d681-11eb-8fe6-452afc4e432d.png" width="100%">
<p align="right"><sup>  <a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4">Back</a> |<a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_6"> Next</a> | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup> Contents</sup></a>
<br/>
<sup>gathering_5</sup></p>

# Communication (understanding our board's robospeek) 

*When in doubt, check out the 'Answers & hints' section*

1. [Signals (definition)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#1-signals)
2. [Digital (button revisited)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#2-digital)
3. [Analog (Part 1: button revisited)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#3-analog)
4. [Analog (Part 2: photocell)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_5/README.md#:~:text=Instructions%20(Part%202)%3A)
5. [Pseudo-analog (ADCs and what microcontrollers communicate in)](https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5#5-pseudo-analog-adcs-and-what-microcontrollers-communicate-in)
6. [PWM (Part 1: what about 'analog' output? back to our new best friend!)](https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5#6-pwm-part-1-what-about-analog-output-back-to-our-new-best-friend)
7. [PWM (Part 2: Yohan's RGB light guide)](https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5/Yohan's_Guide)
8. [Answers & hints](https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5#8-answers--hints)



### 1. Signals (definition)

<dl>
    <dd><i>time-varying 'quantities' which convey some sort of information. In electrical engineering the quantity that's time-varying is usually voltage (if not that, then usually current). So when we talk about signals, <b>just think of them as a voltage that's changing over time</b> </i><a href="https://learn.sparkfun.com/tutorials/analog-vs-digital/all#:~:text=time-varying%20%22quantities%22%20which%20convey%20some%20sort%20of%20information.%20In%20electrical%20engineering%20the%20quantity%20that%27s%20time-varying%20is%20usually%20voltage%20(if%20not%20that%2C%20then%20usually%20current).%20So%20when%20we%20talk%20about%20signals%2C%20just%20think%20of%20them%20as%20a%20voltage%20that%27s%20changing%20over%20time.">(Spark Fun).</a></dd>
</dl>
For our purposes, a signal is a change in voltage over time
<br>

### 2. Digital signals (button revisited)

Digital is discrete and finite. When combined with our previous definition, a <b>digital signal</b> is a voltage that changes between a set of discrete values over time. Before we go any further with a definition, we'll go back to a circuit we put together last week to illustrate the concept.

**Materials:** Jumper wires, a button, breadboard, Arduino Mega2560, computer, and USB to USB A/B cable. 

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

### 3. Analog signals

Analog is continuous and infinite. Color and sound are analog, there are an infinite number of values for hues and frequencies. An <b>analog voltage signal</b> can have any value within it's range. E.g. any number between 0 and 5 volts, such as 2.3456345v.

**Materials:** Photoresistor, jumper wires, a button, breadboard, Arduino Mega2560, computer, and USB to USB A/B cable.

  <p align="center"> 
    <img width="250" height="300" src="https://user-images.githubusercontent.com/52707386/124678471-6ad8ce00-de77-11eb-828e-799c14986964.jpg">
    <br>
    Photoresistor (photocell)
    </br><br>
   </p>
   
**Objective:** Understand the basics of what an analog signal is as well as how it differs from a digital signal.

**Instructions (Part 1: button revisited):**

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

**Instructions (Part 2: photocell):**

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
<br>

### 5. Pseudo-analog (ADCs and what microcontrollers communicate in)
 
As you saw in the last example, the possible read values for an analog pin on our board are 0-1023 (whole numbers only). This should strike you as strange given that an analog signal should have an infinite number of values and the pin is an analog one. The reason for this phenomenon is that our board can't read in true analog. It uses transistors ('gates') to seperate the analog values coming in into discrete categories, in this case any number between 0-1023. The system that does this conversion is called an analog to digital converter or ADC for short. If we look at the pinout image in the previous step we can see the ADC label next to each 'analog' pin.

But why does this happen? In short, our boards are digital systems. They work in discrete signals. To be able to interpret information from analog systems, such as a photoresistor, an ADC is used.
 
Here are some graphs from Spark Fun that help illustrate the concept (the y-axis is Time (t) and the x-axis is Voltage (v)):

   <p align="center"> 
    <img width="700" height="300" src="https://user-images.githubusercontent.com/52707386/124751943-10be2400-dedc-11eb-8a3f-a164c6af4054.png">
    <br>
    Graph of an analog voltage signal. The wave is smooth meaning values are continous. <a href="https://learn.sparkfun.com/tutorials/analog-vs-digital/all#:~:text=Analog%20Signal%20Graphs">Spark Fun</a>
    </br><br>
   </p>
<p align="center"> 
    <img width="700" height="300" src="https://user-images.githubusercontent.com/52707386/124752332-93df7a00-dedc-11eb-9652-f83f81e86461.png">
    <br>
    Graph of a digital voltage signal. The wave is 'stepped' meaning values are discrete. <a href="https://learn.sparkfun.com/tutorials/analog-vs-digital/all#:~:text=make%20beautiful%20music.-,Digital%20Signals,-Digital%20signals%20must">Spark Fun</a>
    </br><br>
   </p>

Our board uses an ADC to read the top graph signal and convert it into something that looks like the bottom graph signal (there's a step missing that we will talk about next). Our board does this because it can only communicate in 1s and 0s. It is converting the information into something it can manage. The range for the data coming in is dependent on the resolution of our ADC. Our board's pins are 10bit. If we calculate 2^(our resolution) = 2^10 = 1024. We see 0-1023 because 0 counts as a value. Different boards and ADCs have different resolutions, follow 2^(bits) to figure out the resolution.

Nevertheless, this is all for reading information, the input side of our analog pins.

### 6. PWM (part 1: what about 'analog' output? back to our new best friend!)

**Materials:** Arduino Mega2560, computer, and USB to USB A/B cable. 

**Objective:** Understand the basics of pulse width modulation (PWM) and how it enables our board to communicate in values seemingly different than '1'(HIGH) or '0'(LOW).

**Instructions:**

<ol type ="i">
    <li>Open the example 'blink' from your Arduino IDE (File > Examples > 01.Basics > Blink).</li>
    <li>Change the value of the <code>delay(1000);</code> after <code>digitalWrite(LED_BUILTIN, LOW);</code> to 0 and upload the program (Ctrl + U). Look at the built-in LED. </li>
    <li>Switch the <code>delay()</code> functions to <code>delayMicroseconds()</code> and change the value of the one you had at 0 to 10000.</li>
    <li>Upload the program and look at the built-in LED. Does the LED look the same?</li>
    <li>Try varying the values of either of the delays, what happens to the LED?</li>
    <li>What are you doing by changing the delays?</li>
</ol>
<br>
What we're looking at, and working with, is pulse width modulation (PWM). It is our board's way of digitally sending out and interpreting signals that are not 1s or 0s in 1s and 0s. Yohan has awesome graphs and more information on the subject that will help you picture and understand the concept better. 

<br>

*To check which of your pins support PWM, look for the PWM label on the pinout or side of your board.*

### 7. PWM (Part 2: [Yohan's RGB light guide](https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5/Yohan's_Guide))

Get ready for some potentiometer and RGB action! hint: the pot is wired, and works, similarly to a photoresistor.

Click on the link title.

<br>

### 8. Answers & hints

**2.ii.** The possible values for <code>digitalRead()</code> are 0 or 1 = LOW or HIGH = 0v or 5v (when powering with 5v).

**3.vii.** The possible values for <code>analogRead()</code> with our button press are 0 or 1023 = LOW or HIGH = 0v or 5v (when powering with 5v). The values are different in that the HIGH is 1023. Now, there is a range between our LOW and HIGH greater than 1.

**3.viii.** For the built-in LED to light up, switch the conditional statement <code>if (buttonState == HIGH)</code> to <code>if (buttonState == 1023)</code>


**Analog signals (Part 2: photocell)**

**3.part2.iv.** The serial monitor should show some whole number between 0-1023.
**3.part2.v.** As light to the photoresistor decreases, the number on the serial monitor should also decrease. Conversely, the number should increase, as light to the photocell increases. The range of values read should include any whole number between 0-1023 (light permitting). As hinted in the previous answer, the printed values can only be 'whole' numbers. The values can't be any number within 0-1023, e.g. the value can't be 14.784.

**3.part2.vi.** The signal interpreted by the board and printed to the serial monitor is digital even though the photocell is an analog component.

**6.iv.** The LED should look dimmer when the delay after setting the LED to LOW is increased.

**6.v.** As the delays are changed the LED should vary in brightness, depending on the delay modified.

**6.vi.** By changing the delays we are modifying the amount of time our signal to the LED is set to HIGH or LOW. If the signal is set to HIGH for longer, the LED will be brighter and vice versa. We are varying the amount of time we are sending either 5v or 0v to our onboard LED, and in doing so, we are creating a false gradient of brightness. A pseudo-analog effect. This same effect can be achieved by using the function <code>analogWrite()</code>. It'll allow us to choose a value between 0-1023 to output, and do so in PWM fashion.

<br>
<br>

<p align="right">Next | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_6">gathering_6</a></b>
<br/>
Back | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_4">gathering_4</a></p>
</b><p align="center"><sup>2019-2021 Tech Fest | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup>Table of Contents</sup></a></p>
