# How to add libraries to the Arduino IDE

**What is a library?**

A library offers easily accesible and useable code for a specific sensor/actuator/module/program/function/etc. Say you wanted to solve the quadratic formula with code. Instead of typing it out, a library might offer a 'quadratic(a, b, c)' function where you would just need to subsitute the values for a, b, and c to get a result. The same is true for a sensor's library. Instead of having to tell your microcontroller how to access the sensor, how to read from it, and how to interpret its readings, you would use a function from the library like 'get_temp_reading().' This pre-built function would do all of that for you by accessing the code written in the library.

Many libraries that are offered by Arduino, SparkFun, Elegoo, etc., come in a zip folder with program examples. This allows you to test your device with a pre-built program that was specifically written for that device. This is super helpful when learning how to use a new sensor/module/etc.

*At the end of this file you can find a real example of this from the 'DHT11 Temperature and Humidity Module' in our kit.*

<br>

**The links below navigate to specific Arduino guide sections on downloading libraries**

1. [Library manager](https://www.arduino.cc/en/Guide/Libraries#how-to-install-a-library)
2. [Zip](https://www.arduino.cc/en/Guide/Libraries#importing-a-zip-library)
3. [Manual](https://www.arduino.cc/en/Guide/Libraries#manual-installation)

<br> 

**Alternatively follow Spark Fun's guides:**

*Spark Fun offers manual installation guides for both Windows and Mac*

1. [Library manager](https://learn.sparkfun.com/tutorials/installing-an-arduino-library/all#using-the-arduino-library-manager)
2. [Manual (Windows)](https://learn.sparkfun.com/tutorials/installing-an-arduino-library/all#manually-installing-a-library---windows)
3. [Manual (Mac)](https://learn.sparkfun.com/tutorials/installing-an-arduino-library/all#manually-installing-a-library---mac)

<br>

**'DHT11 Temperature and Humidity Module' function and library example**

<br>
<p align="center"> 
  <img src="https://user-images.githubusercontent.com/52707386/123477631-2ca7f880-d5b3-11eb-9c71-dec15d85b794.jpg"> 
  <br>
   <b>Snippet of the example code for DHT11 offered for our kit</b><br> 
  .h files are  the 'header' files of a c++ library. These have the names of functions and classes.
   </br><br>
</p>

------

<p align="center"> 
  <img width="600" height="730" src="https://user-images.githubusercontent.com/52707386/123478546-70e7c880-d5b4-11eb-8feb-66db09438634.jpg"> 
  <br>
   <b>Circled in red are the pre-built functions 'temperature' and 'humidity' being implemented</b><br> 
   </br><br>
</p>

-------

<p align="center"> 
  <img width="600" height="400" src="https://user-images.githubusercontent.com/52707386/123477319-b86d5500-d5b2-11eb-9158-95fee1c02c01.jpg"> 
  <br>
   <b>This is a snippet of the .cpp file of the library. Circled in red are our 'temperature' and 'humidity' functions. Around these functions we can see the code used to pull information from the sensor. </b><br> 
   .cpp files have the code that goes into the functions that are available to us. 
   </br><br>
</p>

