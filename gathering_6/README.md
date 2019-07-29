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
   1. This device works by emitting an ultrasonic wave and measuring the time it takes to come back. The time is then converted to distance.
   2. [This guide from Random Nerd tutorials](https://randomnerdtutorials.com/complete-guide-for-ultrasonic-sensor-hc-sr04/) will show you how to connect the sensor and will also offer some demo code to get it running.
   3. Challenge: Light up LEDs as measured distance decreases. Hint: you can use if statements to achieve this (e.g. if (distance < 70) { digitalWrite(LED, HIGH);}).
7. Use the temperature sensor to measure temperature.
         <p align="center">
         <img src="https://user-images.githubusercontent.com/52707386/62086377-f28d1b00-b212-11e9-9efa-f14935b62e70.png">
         </p>
         <p align="center"> MCP9808 temperature sensor - [Adafruit](https://www.adafruit.com/product/1782?gclid=Cj0KCQjwsvrpBRCsARIsAKBR_0LeIkBnfDsWeBAv6npON-kdnfGQfaLCCWkzjt_DARRGqMryvo3bqvsaAijVEALw_wcB) </p>
         <br>
   1. Go to [this website](https://learn.adafruit.com/adafruit-mcp9808-precision-i2c-temperature-sensor-guide/arduino-code) and click on the green button that says ‘Download Adafruit MCP9808 Library.’
      1. Move the opened zip folder to your arduino libraries then restart the IDE. [How to guide for installing libraries and moving them to the correct folder](https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/installing-a-library).
      2. Load the Demo code by navigating: File->Examples->Adafruit_MCP9808->mcp9808test.
      3. Run the code. After it has finished uploading press ctrl+shift+M to open the serial monitor.
      4. Congratulations you’ve successfully, connected, installed, and utilized a temperature sensor! With this knowledge you can use other I2C sensors.
8. Arduino libraries
   1. A library is a compilation of functions for a specific module or sensor. It allows for facilitated control of a device by offering the code to control it in more easily understood snippets. You can tell a library is being used if you see: **#include <libraryname.h>** at the top of the program. To figure out what functions are available in the library you can look up the library name online or look through its folder you downloaded.
      1. A function is similar to an equation in that it takes an argument and does something with it. It may or may not output a result. For the arduino, a function might take an LED number from a list of LEDs and turn that specific LED on.
   2. [More info on libraries by Adafruit](https://learn.adafruit.com/arduino-tips-tricks-and-techniques/arduino-libraries)
9. I2C or Inter-Integrated Communication protocol
   1. This is what your board will use to communicate with the temperature sensor.
      1. I2C is a procedure that allows communication between one or more ‘master’ boards (feather, arduino, etc.) and many ‘slave’ boards (sensors, modules, etc.). This is made possible through the SCL and SDA pins. The SCL is a clock, it synchronizes data transfer between devices connected together while the SDA is the data signal, it transfers data between devices.
   2. [More info on I2C by Sparkfun](https://learn.sparkfun.com/tutorials/i2c/all)
   
      1. 
   
