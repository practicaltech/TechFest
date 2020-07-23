int sensorPin = A3; //define analog pin A3
int value = 0; 

void setup() {
  Serial.begin(9600); 
} 

void loop() {
  value = analogRead(sensorPin); 
  Serial.println(value, DEC); // light intensity
                // high values for bright environment
                // low values for dark environment
  delay(100); 
}
