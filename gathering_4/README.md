# Continuation/Recap of PWM and Analog vs. Digital signals + Introduction to Capacitors
### Materials: Computer, microcontroller (arduino, feather, etc.), USB to micro-USB cable, potentiometer, LEDs, resistors, breadboard, multimeter, wires, potentially some oscilloscopes, and capacitors.
### Objective: ----------------
```
link to cheap oscilloscope
```
1. Connect a potentiometer to your board. Run power through it, an LED, and then into a pin designated as input (pinMode(x, INPUT);). 
Output pin -> LED -> Input pin ->  pot -> ground
   1. Read the resulting voltage with digitalRead and then with digitalWrite.
      1. What values are you finding as you turn the pot?
      2. How are the values read with analogRead different than those you can write with analogWrite.
   2. Connect an oscilloscope to the two ends of the potentiometer. Note: an oscilloscope shows voltage over time as a wave.
      1. What’s happening to the brightness of the LED?
      2. What does the wave on the oscilloscope look like?
         1. As you turn the pot?
         2. Is this a digital or analog signal you are observing? (hint: a digital signal is discrete while an analog signal can be infinitely variable within two set values). Look back to the 3rd meeting’s notes for visual representations of each.
   3. Try dimming and brightening an LED using analogWrite again. This time, use an oscilloscope to look at what’s happening with voltage over time.
      1. Does the wave you are looking at make sense with the function your using? Hint: ***analog***Write()
      2. Pulse Width Modulation (PWM), changing the percent of time voltage is ‘on’ (peak on wave) vs. ‘off’ (trough on wave) in a given period of time, is a method by which microcontrollers imitate analog signals with digital means.
2. Capacitors
   1. Temporary energy storage and supply and signal smoothing
Note: Always check to make sure the component you are using is appropriate for the amount of power you’re passing through it. In our case these ceramic capacitors are not rated but should be able to handle 3-5v.
      1. Build a circuit following the schematic below:
      <p align="center">
      <img src="https://user-images.githubusercontent.com/52707386/62070271-0161d680-b1ef-11e9-856d-8e03272816cd.png"> 
      <br><br>
      <b>LED in simple RC circuit - bdevore, Easy EDA</b><br>
      <br>
      </p>
   2. Instead of using a 9v battery, use your featherboard to provide power. Play around with the resistance values. Leave two wires unconnected to act as a switch. Connect them to each other to ‘close’ the circuit and disconnect them to ‘open’ the circuit. Look at how the LED responds. Note: use a red LED for best results. If an oscilloscope is available look at what the capacitor does to the voltage over time wave as you open and close the circuit.
      1. Keep the wires acting as a switch connected and try blinking the LED as you did in ‘Blink.’
         1. What do you observe?
         2. Modulate the blink speed by changing the delays.
            1. Visually, Is the blinking of the LED any different to when it wasn’t connected to a capacitor?
            2. Observe what happens to the v/t wave through an oscilloscope.
