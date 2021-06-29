//www.elegoo.com
//2016.12.08
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);
   delay(1000);
   pinMode(8, OUTPUT);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   if (a<6){
    digitalWrite(8, HIGH);
   }
   else{
     digitalWrite(8, LOW);
   }
   delay(100);
     
}
