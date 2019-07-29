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
               <p align="center">
               <img align="center" width="570" height="350" src="https://user-images.githubusercontent.com/52707386/62074492-ca43f300-b1f7-11e9-82b2-dd6313bd6f69.png"></p>
               <p align="center"> Alternating current on amplitude (change in voltage) over time graph - SparkFun </b>
                  <br><br></P>
               <p align="center">
               <img align="center" width="570" height="350" src="https://user-images.githubusercontent.com/52707386/62074488-c87a2f80-b1f7-11e9-8635-cfee45a2432d.png">
               <br>
               <p align="center"> Direct current on voltage over time graph - SparkFun </b>
     2. Does your board output AC or DC?
     3. Reasons for using each:
        1. AC: Efficient transport of electricity over long distances. Easily transformable (to lower or greater voltage).
        2. DC: Constant and unidirectional.
        3. More information: [Science ABC](https://www.scienceabc.com/innovation/ac-vs-dc-alternating-current-or-direct-current-which-is-better.html), [SparkFun](https://learn.sparkfun.com/tutorials/alternating-current-ac-vs-direct-current-dc/all#direct-current-dc).
2. Capacitor review
   1. What the heck is a capacitor anyways?
      1. A capacitor stores and releases energy. Its analogous mechanical component is the spring. As you apply a force to the spring it gains potential energy and compresses. When you stop applying a force, the spring extends and releases its stored potential energy. Capacitors are similar to springs in that as you apply a voltage to a capacitor, the capacitor starts to build a charge. Then, when you stop applying voltage, the capacitor releases its charge. 
   2. Some uses:
      1. Capacitors block DC, when fully charged, while allowing AC to pass. They also serve to smooth voltage and signals, releasing charge as the power source’s voltage drops and absorbing or blocking charge as the power source’s voltage spikes.
      2. More Information:[Adafruit](https://learn.adafruit.com/circuit-playground-c-is-for-capacitor/what-is-a-capacitor), [SparkFun](https://learn.sparkfun.com/tutorials/capacitors/all).
   3. Parallel vs. in Series
      1. Capacitors add up in parallel and ‘get reduced’ in series. These scenarios can be represented with the following equations:
               <p align="center">
               <img align="center" width="570" height="350" src="https://user-images.githubusercontent.com/52707386/62077737-b56b5d80-b1ff-11e9-95b4-83fcf8486594.jpg">
               <br>
               <p align="center"> Capacitors in parallel vs. in series - [Circuit Digest](https://circuitdigest.com/tutorial/capacitor-in-series-and-parallel-circuits)</p>
               <br>
   4. Inside a capacitor
      1. A capacitor has two metal plates and an insulator in between which is known as a dielectric. The plates store charge through a segregation of electrons (many electrons on one plate and fewer on the other).
               <p align="center">
               <img align="center" width="640" height="350" src="https://user-images.githubusercontent.com/52707386/62077974-51956480-b200-11e9-8e2f-7c8fc953c596.png"></p>
               <p align="center"> Diagram of a capacitor storing charge - [SparkFun](https://learn.sparkfun.com/tutorials/capacitors/all)</b></p>
               <br>
      2. When power is no longer supplied, the charge is released. If the capacitor is overloaded, the dielectric breaks down and the charge is released. The clouds and earth form a natural capacitor with the space in between acting as the dielectric. When enough charge is built up, the dielectric breaks down and lightning is produced [link](https://micro.magnet.fsu.edu/electromag/java/lightning/index.html).
   5. Incorporate a capacitor into a circuit with an LED in parallel. Use the  analog write command to brighten or dim your LED. Observe with an oscilloscope if available. What is happening to the voltage over time wave? Why?
3. LEDs, diodes, and directionality
   1. SparkFun’s definition of an LED: “They come in a huge variety of sizes, shapes, and colors, but no matter what they look like they have one thing in common: they're the bacon of electronics. They're widely purported to make any project better and they're often added to unlikely things (to everyone's delight).”
   2. In essence diodes control the direction of current-flow. Allowing current to flow in one direction more easily than in the other (depends on the diode being used). Some diodes such as LEDs. and laser diodes produce light when current passes through them
   3. LEDs or Light Emitting Diodes are unidirectional components that produce light when current is supplied in the (+) to (-) direction.
               <p align="center">
               <img align="center" width="640" height="200" src="https://user-images.githubusercontent.com/52707386/62079055-c5d10780-b202-11e9-9eee-d8a8b878b00a.png"></p>
               <p align="center"> Diagram of an LED - [Wikipedia](https://commons.wikimedia.org/wiki/File:LED_symbol.svg)</b></p>
   <p align="center"><b><i>Note:</b></i> In the case of LEDs the cathode is (-) and the anode is (+)!!</p>
   <br>
   4. Can you control multiple LEDs using less OUTPUT pins than LEDs? Try it out!
      1. Directionality of components is important in electrical systems as many components placed one way behave differently than when flipped 180°. This also allows for creative use of components.
         1. Note: If enough voltage is supplied in the opposite direction, the LED may break down and allow current to pass. LEDs usually have a breakdown voltage of about 50v.
      2. If you get stuck, check out [charlieplexing] (https://www.instructables.com/id/Charlieplexing-LEDs--The-theory/).
