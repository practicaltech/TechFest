# Pulse Width Modulation (PWM) and Analog vs. Digital Signals
### Materials: Potentiometer, LEDs, Feather board, resistors, breadboard, multimeter, wires, potentially some oscilloscopes
#### Objective: Learn about how power is sent, modulated, and interpreted by microcontrollers and electrical components.
1. Dim and brighten LED with ‘analog’ control.
   1. Recreate LED circuit with your board as the power supply.
<p align="center">
  <img width="400" height="400" src="https://user-images.githubusercontent.com/52707386/61998579-04ca5600-b067-11e9-8cd6-5c3d1ca73482.png">
</p>  
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
3. Digital vs. analog signals
   1. Signals: time varying quantities that convey some sort of information - spark fun
      1. In electrical engineering the quantity is usually voltage. Therefore a signal for EE is voltage change over time. This can be plotted on a graph of voltage vs. time as a wave. Looking at the wave produced (possible with an oscilloscope) can help us determine whether the signal is digital or analog.
   2. Digital signal
      1. Discrete and finite - 1 or 0. This is usually seen as a square wave or an almost smooth wave in the case of higher resolution yet, small steps are still discernible.
         1. Usually seen in computer communication.
            1. Each computer follows a scheme that defines what combination of ones and zeros represents a certain letter or number.
         2. Some digital components include: transistors, logic gates, and microcontrollers.
         ![image](https://user-images.githubusercontent.com/52707386/62011774-94d4d200-b131-11e9-84e8-cd252f1534c1.png)
   3. Analog signal
      1. Infinite in range, can have a minimum and maximum. This is usually seen as a smooth wave.
         1. Usually seen in video and audio.
         2. Some analog components include: resistors, diodes, and capacitors.
         ![image](https://user-images.githubusercontent.com/52707386/62011787-d6657d00-b131-11e9-9c7a-a764c5bc6caa.png)
4. Anatomy of a resistor and a potentiometer (pot)
   1. What’s inside a resistor, a potentiometer?
<p align="center">
  <img width="700" height="350" src="https://user-images.githubusercontent.com/52707386/62011802-19275500-b132-11e9-9bf4-4bc812a81c8e.png">
</p>  
 Inside a resisotr - Spark fun
   
   ![image](https://user-images.githubusercontent.com/52707386/62011816-525fc500-b132-11e9-8da9-c7ee6b88a0ba.png)
   Potentiometer diagram - Build Electronic Circuits
   
   1. How is the pot similar to a resistor, how is it different?
         1. Hint: the resistors on the left increase in resistance as you go down. On the potentiometer on the right, if you pass power from the first to the second pin (pins left to right), the voltage would decrease as you turn the potentiometer clockwise.
   2. Make a circuit with an LED and connect the pot to the LED.
      1. Make sure the resistance range is suitable for your LED and board (V=IR) (different pots have different resistance ranges). When in doubt, go for a greater resistance.
      2. Turn the potentiometer while supplying power to the LED, what happens?
   3. Now make a circuit with your pot connected to your board (power pin -> analog pin).
      1. Make sure to set your receiving pin as INPUT
         1. Why don’t we want to set it as output? Think back to the battery and what would happen if we connected a wire with very little resistance across its terminals
      2. Read the voltage across the pot with analogRead
         1. What is the range of input? Is this different than your analogWrite range? Hint: bits & resolution.
      3. Read the voltage across the pot with digitalRead
      

