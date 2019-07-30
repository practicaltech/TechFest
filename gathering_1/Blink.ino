/* 

Blink
This program turns an LED on and off. The objective of creating
this sketch is to learn how to send power to a pin, how to stop 
sending power to that pin, and how to manipulate time within the IDE.

*/ 


void setup() { 
  //put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); // sets the pin connected to the built-in LED as output (output power)
}

void loop() {
  // main code, runs repeatedly
  digitalWrite(LED_BUILTIN, HIGH); //sends power to the LED (LED on)
  delay(1000);                     //waits 1 second (1000 = 1sec)
  digitalWrite(LED_BUILTIN, LOW);  //stops power to the LED (LED off)
  delay(1000);                     //waits 1 second
}
