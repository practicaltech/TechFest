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
          <p>
          <img align="center" width="550" height="300" src="https://user-images.githubusercontent.com/52707386/62074492-ca43f300-b1f7-11e9-82b2-dd6313bd6f69.png">
          <b align="center"> Alternating current on amplitude (change in voltage) over time graph - SparkFun </b>
            <br>
          <img align="center" width="550" height="300" src="https://user-images.githubusercontent.com/52707386/62074488-c87a2f80-b1f7-11e9-8635-cfee45a2432d.png">
<b align="center"> Direct current on voltage over time graph - SparkFun </b>
          
           
3. Does your board output AC or DC?
  2. Reasons for using each:
    1. AC: Efficient transport of electricity over long distances. Easily transformable (to lower or greater voltage).
    2. DC: Constant and unidirectional.
    3. More information: [Science ABC](https://www.scienceabc.com/innovation/ac-vs-dc-alternating-current-or-direct-current-which-is-better.html), [SparkFun](https://learn.sparkfun.com/tutorials/alternating-current-ac-vs-direct-current-dc/all#direct-current-dc).

