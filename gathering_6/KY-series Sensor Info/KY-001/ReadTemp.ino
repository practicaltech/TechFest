/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This program was obtained from ArduinoModule at https://arduinomodules.info/ky-001-temperature-sensor-module/    //
// NOTE: for this program to work you must download the OneWire and DallasTemperature libraries.                   //
//       These can be found on the Arduino IDE -> Tools -> Manage Libraries -> search: OneWire ->                  //
//        -> install: MAX31850 DallasTemp & MAX31850 OneWire                                                       //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into pin 11 on the Arduino
#define ONE_WIRE_BUS 11 //pin 11 has 12C communication capabilities (check the pinout to see which pin is 11)

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // start serial port
  Serial.begin(9600);
  sensors.begin(); // IC Default 9 bit. If you have troubles consider upping it 12. Ups the delay giving the IC more time to process the temperature measurement
}

void loop(void)
{ 
  // call sensors.requestTemperatures() to issue a global temperature 
  // request to all devices on the bus
  Serial.print("Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  Serial.println("DONE");

  Serial.print("Temperature for Device 1 is: ");
  Serial.print(sensors.getTempCByIndex(0)); // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
}
