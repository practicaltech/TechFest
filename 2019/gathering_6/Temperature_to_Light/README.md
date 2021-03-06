# Temperature 2 Light
### Materials: 
Computer, microcontroller (arduino, feather, etc.), USB to micro-USB cable, KY-001 Temperature Sensor, KY-009 RGB Full Color LED, resistors (110Ωx2, 180Ω), breadboard, wires, and a multimeter (for troubleshooting).
Note: if you don't have resistors of those values, remember reistance adds up when resistors are in series (line with eachother).

### Objective: 
Learn how to draw information from a sensor, then understand and manipulate the information. In this case we understand and manipulate the temperature values by assigning the values to colors and intensity in a light display.
```
Links to KY-001 & KY009 modules, datasheets included:
  https://arduinomodules.info/ky-001-temperature-sensor-module/
  https://arduinomodules.info/ky-009-rgb-full-color-led-smd-module/
```
## Step 1: Wiring
#### From the Demo:
  <p align="center">
  <img src="https://user-images.githubusercontent.com/52707386/87631970-0d93bc00-c6fe-11ea-9c36-587baf8366f8.jpg">
  <br>
  
#### Now let's work backwards:
  <p align="center">
  <img src="https://user-images.githubusercontent.com/52707386/87632222-85fa7d00-c6fe-11ea-8e7e-e0cbd3abcb4e.jpg">
  </p>
  <p align="center"> Without extender cables for sensor and RGB light </p>
  <br>
  <p align="center">
  <img src="https://user-images.githubusercontent.com/52707386/87632373-e25d9c80-c6fe-11ea-80bc-eb1b4e915ce6.jpg">
  </p>
  <p align="center"> Same picture, different angle </p>
  <br>
  <p align="center">
  <img src="https://user-images.githubusercontent.com/52707386/87632925-ffdf3600-c6ff-11ea-8ad3-e608cdabcb5d.jpg">
  </p>
  <p align="center"> Just the RGB, the gray wire is connected to GND (ground) </p>
  <br>
  <p align="center">
  <img src="https://user-images.githubusercontent.com/52707386/87633090-5ba9bf00-c700-11ea-9f50-47cbe207c237.jpg">
  </p>
  <p align="center"> Just the Temp sensor </p>
  <br>
  
#### From the ArduinoModules page:

Note: I changed the pin locations of a few of these to match our board, yet these illustrations are very helpful for determining what you need to connect. For more information,       check the links (found at the top of this page and below each image).

  <p align="center">
  <img src="https://arduinomodules.info/wp-content/uploads/Arduino_KY-001_Keyes_Temprerature_Sensor_connection-diagram.png">
  </p>
  <p align="center"> Wiring for temperature sensor [Arduino Modules KY-001](https://arduinomodules.info/ky-001-temperature-sensor-module/) </p>
  <br>
  <p align="center">
  <img src="https://arduinomodules.info/wp-content/uploads/Arduino_KY-009_Keyes_RGB_LED_SMD_module_connection_diagram.png">
  </p>
  <p align="center"> Wiring for RGB module [Arduino Modules KY-009](https://arduinomodules.info/ky-009-rgb-full-color-led-smd-module/) </p>
  <br>

## Step 2: Ensuring everything is connected properly (multimeter) - TB finished
## Step 3: Coding
#### 1. Download the libraries 'MAX31850 DallasTemp' & 'MAX31850 OneWire' from the Arduino IDE
   Arduino IDE -> Tools -> Manage Libraries -> search: OneWire -> install: MAX31850 DallasTemp & MAX31850 OneWire
#### 2. Copy & paste the 'Temp2LightCode.ino' file into your Arduino IDE (make sure you delete everything in the new file before you paste)
   https://github.com/practicaltech/TechFest/blob/master/gathering_6/Temperature_to_Light/Temp2LightCode.ino
#### 3. Run it!
   More comments on the top of the program file and throughout the lines of code.
### Note: You will most likely run into problems with the IDE, the wiring, or the sensors. Please reach out! We'll be happy to help.
