# Getting closer to your board, more on capacitors, and diode recap and exploration
### Materials: Computer, microcontroller (arduino, feather, etc.), USB to micro-USB cable, potentiometer, LEDs, resistors, breadboard, multimeter, wires, potentially some oscilloscopes, and capacitors.
### Objective: ----------------
```
link to cheap oscilloscope
```
1. Alternating current (AC) vs. Direct current (DC), a.k.a. the electric battle between Tesla and Edison. What is my board using? 
  1. Use your multimeter to measure the voltage your board is outputting from any pin previously designated as OUTPUT on the IDE. Alternatively, use the pins labeled USB or 3.3V. If available, confirm with an oscilloscope. 
    1. Is the voltage positive or negative? Does the value change by more than a volt?
    2. Note: direct current travels in one direction while alternating current switches back and forth. If you were to draw a voltage over time graph (as you would see on an oscilloscope) DC would be seen as a horizontal line at a certain voltage while AC would look like a sine wave moving between a negative and a positive number.
    <p align="left">
      <img src="https://user-images.githubusercontent.com/52707386/62074492-ca43f300-b1f7-11e9-82b2-dd6313bd6f69.png">
      <br>
      <b>Alternating current on voltage over time graph - SparkFun</b>
    </p>
    <p align="right">
      <img src="https://user-images.githubusercontent.com/52707386/62074488-c87a2f80-b1f7-11e9-8635-cfee45a2432d.png">
      <br>
      <b>Direct current on voltage over time graph - SparkFun</b>
    </p>
