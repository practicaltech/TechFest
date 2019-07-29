# Prototyping materials and electronics
### Materials: 9v battery, computer, resistors of various resistances, breadboard, multimeter, safety glasses, LEDs, microcontroller (arduino, feather, etc.), USB to micro-USB cable.
#### Objective: Getting familiar with components regularly used in circuits and the testing equipment used to check them.
If you need help with circuit building, choosing resistors, and so forth for this particular project, the link below is very helpful.
https://learn.adafruit.com/adafruit-arduino-lesson-2-leds  
LED = Light Emitting Diode  
1. Light up an LED using a 9v battery, wires, a breadboard, and an LED.
   1. Breadboard: A way to prototype circuits without soldering.
<p align="center">
  <img width="560" height="400" src="https://user-images.githubusercontent.com/52707386/61340000-405a5a00-a7f5-11e9-8d42-524e5a13269d.jpg"> 
   </br><br>
   <b>How to use a breadboard - Sparkfun </b><br> 
   </br><br>
</p>  
   2. Measure the voltage across the LED with a voltmeter throughout the experiment. A voltmeter is used to measure voltage across two points. To use the voltmeter: set the dial to V and touch the positive lead to the positive lead (cathode) of the LED and the negative lead to the negative lead (anode) of the LED.
   
   3. Connect the LED to the battery while keeping the voltmeter leads connected to the LED (use a buddy or alligator clips).  
   
<p align="left">
  <img width="190" height="150" src="https://user-images.githubusercontent.com/52707386/62065113-24868900-b1e3-11e9-9663-c9e47d252202.gif"> 
</p>  

If the LED turns on it will get very hot, use safety glasses and disconnect the LED after the peak voltage has been measured. If the value starts to decrease, disconnect the LED. You've reached the peak voltage.  
      1. Did the LED turn on? Look at the length of the leads on the LED. Are they different? Does it matter which is facing the positive side of the battery?
      2. What does the peak voltage measured represent?
         1. *Hint* - voltage drop/loss from circuit due to component.
   4. What happens to the LED, why?
2. V=IR  
V(voltage, volts = v), I(current, amperes = amps), R(resistance, ohms = Ω), symbol(name, unit of measurement = abreviation).
  # 1. Hose analogy of electricity
   2. What is a resistor? What does it do?
      1. Try lighting up your LED again, now using a resistor.
      2. Use V=IR to calculate resistance needed to light up that specific LED. Where V equals voltage drop across LED and I equals current. To determine the maximum and average amounts of current your LED can take, look up the datasheet (in search bar: ‘red LED datasheet PDF’). (Safe amount: Red = ~17mA, Green = ~20mA). Later on we will show you how to measure that value using the multimeter.
      3. Determine what value resistor to use. 
   # link
   3. Ohmmeter - an ohmmeter is used to measure resistance (multimeters can measure volts, amperes, and ohms).
   4. Measure resistance of resistors.
   5. How is a circuit drawn?
      1. What are the symbols for power, ground, resistor, and LED?
3. Back to embedded systems microcontrollers.
   1. How do I light up an external LED with my board?
      1. Use voltmeter on board pins
         1. Can you use this voltage to light up your LED?
         2. Can you turn the pin voltage on and off?
   2. How to initiate pins
      1. In Arduino IDE go to ‘Help’ > ‘Reference’ > ‘Digital I/O’ > ‘pinMode’  
      
void setup() {
  // initialize digital pin 'x' as an output. x represents any pin that can output power on your board.
  pinMode(x, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(x, HIGH);   // send power to 'x' pin (HIGH is the voltage level)
}
   3. Connect pins to breadboard and LED.
   4. Blink the LED
   4. Change LED blink speed by changing delay, try ‘delayMicroseconds()’
      1. Measure voltage as you increase the blink speed by reducing on time or off time.
      2. Keep decreasing the delay time until light is barely visible
         1. Measure voltage throughout.
         2. Is the voltage different than it was when the LED was on all the time?
3. Pulse Width Modulation (PWM) and Analog vs. Digital signals coming next Tech Fest!
   
