# Pulse Width Modulation (PWM) and Analog vs. Digital Signals
### Materials: Potentiometer, LEDs, Feather board, resistors, breadboard, multimeter, wires, potentially some oscilloscopes
#### Objective: Learn about how power is sent, modulated, and interpreted by microcontrollers and electrical components.
1. Dim and brighten LED with ‘analog’ control.
   1. Recreate LED circuit with your board as the power supply.
![image](https://user-images.githubusercontent.com/52707386/61998579-04ca5600-b067-11e9-8cd6-5c3d1ca73482.png)
*Fritzing*
   2. Use analogWrite instead of digitalWrite to turn on the LED
      1. analogWrite() requires you input a pin and a value (e.g. analogWrite(12, 40);)
      2. Test out different values
         1. What is the range of possible values?
            1. analogWrite has an 8 bit resolution while analogRead has a 10 bit resolution. What does this mean? A bit can either be a 1 or a 0 and a byte is 8 bits. When we write a number such as 456, we require 3 numbers as each ranges from 0 to 10. In binary, or machine language, the possible values for a number are either a 1 or a 0. This means that a machine requires a lot more numbers to write 456. With 8 number spaces, 255 is the largest number you can make in binary, with 10 it is 1024. This means that the microcontroller can read at a higher resolution than what it can write.
         2. Read voltage throughout
         3. If available, use an oscilloscope to view the voltage changes.
      3. Pulse Width Modulation (PWM) is a type of digital signal in which we vary the percentage of time spent ‘on’ (supplying power) vs. time spent ‘off’ in a given period.https://learn.sparkfun.com/tutorials/pulse-width-modulation/all, https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/theory-pwm. This is used in analog functions to dim or brighten your LED or to supply a specific voltage to a component. PWM is a trick microcontrollers use to make a digital signal appear to be analog.
2. Dim and brighten LED with digitalWrite()
   1. After making your LED blink, try reducing the delay time either for the on or off time by using delayMicroseconds(). (hint: to blink an LED with delay and digitalWrite, you will have 2 delays in your code, try changing one at a time)
   2. How are delays here similar to PWM? How are they different?
      1. Look at what your multimeter is reading in terms of voltage as you decrease or increase the delay time for the blinking LED.
      2. Is the voltage changing?
      3. Is the brightness of the LED changing?
         1. What you are observing is ‘voltage averaging’. When power is turned on and off fast enough, the voltage being received by the LED is said to be averaged between the time spent on vs off. This is similar to PWM but in this case you are directly controlling the time.

