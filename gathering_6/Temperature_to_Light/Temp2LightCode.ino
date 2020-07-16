////////////////////////////////////////////////////////////////////////////////////////////////
This program is mainly a mash of code written and published by ArduinoModule at
https://arduinomodules.info/ky-001-temperature-sensor-module/     and
https://arduinomodules.info/ky-009-rgb-full-color-led-smd-module/
All credit goes to them. I only added the two together and added/changed a few lines.

NOTE: for this program to work you must download the OneWire and DallasTemperature libraries.
      These can be found on the Arduino IDE -> Tools -> Manage Libraries -> search: OneWire -> 
      -> install: MAX31850 DallasTemp & MAX31850 OneWire
///////////////////////////////////////////////////////////////////////////////////////////////

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into pin 11 on the Arduino
#define ONE_WIRE_BUS 11

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

int redpin = A5;    // select the pin for the red LED
int greenpin = A4;  // select the pin for the green LED
int bluepin = A3;   // select the pin for the  blue LED

float tmp;          // set a variable to catch current temperature
float tmpbeg;       // set a variable to catch temperature at start
float tmpdif;       // calculate the difference between the previous two variables

void setup(void)
{
  // start serial port
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
  sensors.begin();  // IC Default 9 bit. If you have troubles consider upping it 12. Ups the delay giving the IC more time to process the temperature measurement
  delay(3000);      //3 second delay
  sensors.requestTemperatures(); // Send the command to get temperatures
  tmpbeg = sensors.getTempCByIndex(0); // record initial temperature to 'tmpbeg' variable
}

void loop(void)
{ 
  // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
  sensors.requestTemperatures(); // Send the command to get temperatures

  tmp = sensors.getTempCByIndex(0); // set 'tmp' variable to current temperature
  // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
  tmpdif = abs(tmp - tmpbeg);       // set 'tmpdif' variable to the absolute difference of the current temperature minus the initial temperature
  Serial.print("Temp Beg: ");       // the following print statements are for debugging, yet they allow you to see the temperature readings
  Serial.println(tmpbeg);
  Serial.print("Temp: ");
  Serial.println(tmp);

  // The increases and decreases in light intensity for each value (R, G, or B) is se to the difference of temperatures multiplied by 40.
  // This can be adjusted to your needs.
  // There is also no limiter for the values which causes light colors to roll over. 
  // E.g. if the R value gets too high (beyond 255), it rolls over to 0 (which turns red off).

  if (tmpbeg == tmp) { //white for mid/neutral --- sets the initial temperature color to white
    analogWrite(redpin, 200);  //set PWM value for red
    analogWrite(bluepin, 100); //set PWM value for blue
    analogWrite(greenpin, 100); //set PWM value for green
    delay(1);
  }
  else if (tmp > tmpbeg) {  // if the current temperature rises above the beginning temperature
    analogWrite(redpin, 200 + tmpdif*40);  //set PWM value for red, increase the intensity of red
    analogWrite(bluepin, 100 - tmpdif*40); //set PWM value for blue, decrease the intensity of blue
    analogWrite(greenpin, 100 - tmpdif*40); //set PWM value for green, decrease the intensity of green
    delay(1);
  }
  else if(tmp < tmpbeg) {
    analogWrite(redpin, 200 - tmpdif*40);  //set PWM value for red, decrease the intensity of red
    analogWrite(bluepin, 100 + tmpdif*40); //set PWM value for blue, increase the intensity of blue
    analogWrite(greenpin, 100 + tmpdif*40); //set PWM value for green, increase the intensity of green
    delay(1); 
  }
}
