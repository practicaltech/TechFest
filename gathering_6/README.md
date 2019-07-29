# Transistors, sensors, and libraries
### Materials: Computer, microcontroller (arduino, feather, etc.), USB to micro-USB cable, transistors, potentiometer, LEDs, resistors, breadboard, multimeter, wires, potentially some oscilloscopes, capacitors, ultrasonic ranging module and I2C temperature sensor.
### Objective: ----------------
```
link to cheap oscilloscope (inlude budget for kits in github)
```
1. Review of switches as we move into transistors.
   1. Create a circuit with two switches in parallel going to an LED:
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62084888-29613200-b20f-11e9-9f16-f36cc130fb55.png">
         </p>
         <p align="center"> Circuit made on [CircuitLab](https://www.circuitlab.com/) </p>
         <br>
   2. Alternate switching A and B on and off. When is the LED on? When is it off? Keep this circuit together until the end.
2. Switch an LED on and off through a transistor.
   1. Figure out what each pin is on the transistor by looking up the datasheet using the part number (RFP30N06LE). What type of transistor are we using?
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62085364-421e1780-b210-11e9-8c69-afee50d6253b.jpg">
         </p>
         <p align="center"> Transistor examples - [Hardware Secrets](https://www.hardwaresecrets.com/quiz/basic-electronics-transistors/transistors/) </p>
         <br>
   2. A field effect transistor (FET) has 3 pins, labeled Gate, Drain, and Source. Current flows from drain to source and the flow is controlled by voltage applied on the gate.
   3. Connect the transistor and an LED to your board like this:
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62085487-8f01ee00-b210-11e9-8b15-9dacbdce9fb1.jpg">
         </p>
         <p align="center"> Follow wires by color and ignore the yellow wire </p>
         <br>
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62085638-edc76780-b210-11e9-8b3b-7c59e1aa2cfb.jpg">
         </p>
         <p align="center"> Sketched schematic of the circuit above </p>
         <br>
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62085531-ae008000-b210-11e9-8dc4-0f347e920085.jpg">
         </p>
         <p align="center"> GDS squares represent the three pins on the transistor </p>
         <br>
   4. Use the code below to switch the LED on and off through the transistor.
   ```
   BLINK code
   ```
   5. Going back to the water analogy where current is the flow of water through a hose, a transistor acts like a valve on this hose. A transistor can ‘open,’ allowing current to flow, ‘close’ stopping the flow of current, and also control flow rate by being partially open or closed. A transistor allows us to electrically turn devices on and off without directly interacting with them (pushing a button, flipping a switch, etc.). 
3. Replace one of the switches from the first circuit with a transistor.
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62085784-4434a600-b211-11e9-9c64-edf6f95830a8.png">
         </p>
         <p align="center"> Circuit made on [CircuitLab](https://www.circuitlab.com/) </p>
         <br>
   1. Alternate switching the transistor and the switch on and off. Can you reproduce what you observed in the first example?
   2. **Example of going from a switch to a transistor: remotely operated camera. The button was bypassed with wires so that we could connect that component to a transistor. (ON SEPERATE)**
      1. [More info on transistors](https://learn.sparkfun.com/tutorials/transistors/all#extending-the-water-analogy).
4. Connect a potentiometer to the gate of your transistor. Instead of blinking power, keep OUTPUT to the gate at HIGH. Turn the potentiometer as you measure voltage from gate to source. At what voltage does the LED turn on? This is the VGS(ON) or threshold voltage, the voltage at which the transistor opens (current is allowed to flow from drain to source). 
   1. Turn the potentiometer as you measure voltage from drain to source. What happens to the voltage?
5. Sensors allow us to gather information from the world around us. These range from simple sensors such as a photocell, which decreases in resistance as sunlight increases, to gyroscopic sensors that measure orientation and so forth. At their core most sensors act as a resistor in that they alter the flow of current passing through them. The current is altered in response to a stimulus (motion, pH, light, sound, temp, etc.). The resulting current is what we calibrate into a data reading.
6. Use the ultrasonic ranging module to measure distance.
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62086086-261b7580-b212-11e9-8989-6c4010988073.png">
         </p>
         <p align="center"> Ultrasonic ranging module[The Engineering Projects](https://www.theengineeringprojects.com/2018/10/introduction-to-hc-sr04-ultrasonic-sensor.html) </p>
         <br>
      
   
