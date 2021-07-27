### Ideas

1. Go Pro remote/controller
2. [Bee monitor](https://create.arduino.cc/projecthub/delfin-ki/beemonitor-96f5d7?ref=platform&ref_id=424_trending___&offset=6)
3. [RC submarine](https://create.arduino.cc/projecthub/issaom/rc-submarine-9ad0ce?ref=search&ref_id=submarine&offset=0)
4. [Automatic pet Feeder](https://create.arduino.cc/projecthub/circuito-io-team/iot-pet-feeder-10a4f3?ref=platform&ref_id=424_trending___&offset=70)
5. [Automatic plant watering system](https://create.arduino.cc/projecthub/neetithakur/automatic-plant-watering-system-usin[…]no-uno-8764ba?ref=platform&ref_id=424_trending___&offset=127)
6. Camera trap
7. Camera stream
8. [Smartphone controlled Arduino car](https://create.arduino.cc/projecthub/andriy-baranov/smartphone-controlled-arduino-4wd-robot-car-14d239?ref=platform&ref_id=424_trending___&offset=92)
9. Device to measure salinity around a system


### Ideas + elements/notes

'Elegoo lessons' refers to the section within our kit's pdf guide that contains the component's information

1. Go Pro remote/controller
    1. Bluetooth (phone app)
    2. Bluetooth (Nano 33 figure out comms protocol)
    3. Bluetooth (Nano 33 hardwired to cam
3. [Bee monitor](https://create.arduino.cc/projecthub/delfin-ki/beemonitor-96f5d7?ref=platform&ref_id=424_trending___&offset=6)
    1. Sound sensor (lesson 20 in Elegoo guide) from kit instead of MP34DT05
5. [RC submarine](https://create.arduino.cc/projecthub/issaom/rc-submarine-9ad0ce?ref=search&ref_id=submarine&offset=0)
    1. Can use bluetooth instead of radio for comms. No GPS/Glonass.
7. [Automatic pet Feeder](https://create.arduino.cc/projecthub/circuito-io-team/iot-pet-feeder-10a4f3?ref=platform&ref_id=424_trending___&offset=70)
    1. Kit contains all necessary materials
9. [Automatic plant watering system](https://create.arduino.cc/projecthub/neetithakur/automatic-plant-watering-system-usin[…]no-uno-8764ba?ref=platform&ref_id=424_trending___&offset=127)
    1. Project no longer available, similar project [here](https://create.arduino.cc/projecthub/Niko123/plant-watering-system-006912?ref=search&ref_id=plant%20watering&offset=1)
    2. Our kit contains all necesary items (water sensor slightly different (Elegoo lesson 18))
11. Camera trap
    1. [Tutorial for Arducam setup](https://www.youtube.com/watch?v=hybQpjwJ4aA&t=363s)
    2. PIR sensor (Elegoo lesson 17)
13. Camera stream
    1. [Tutorial for Arducam setup](https://www.youtube.com/watch?v=hybQpjwJ4aA&t=363s)
       1. Follow [this wiring setup](https://github.com/tensorflow/tflite-micro/tree/main/tensorflow/lite/micro/examples/person_detection#running-on-arduino) to use the cam with the Nano 33 IOT
    3. [Code and tutorial for streaming through bluetooth](https://github.com/ArduCAM/Arduino/blob/master/ArduCAM/examples/mini/ArduCAM_Mini_Video_Streaming_Bluetooth/ArduCAM_Mini_Video_Streaming_Bluetooth.ino)
15. [Smartphone controlled Arduino car](https://create.arduino.cc/projecthub/andriy-baranov/smartphone-controlled-arduino-4wd-robot-car-14d239?ref=platform&ref_id=424_trending___&offset=92)
    1. Requires a few extra materials, simplified version can be accomplished with motor (forward, back) and servo (turning) from kit (Elegoo lessons 9 and 29)
17. Device to measure salinity around a system
    1. [Measure electrical conductivity with Arduino](https://create.arduino.cc/projecthub/mircemk/arduino-electrical-conductivity-ec-ppm-tds-meter-c48201)
    2. Measure water temperature with thermistor from kit (Elegoo lesson 23)
    3. Use both to calculate salinity ([converter](http://www.fivecreeks.org/monitor/sal.shtml))
