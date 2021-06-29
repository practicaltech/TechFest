/**
 * Some fun RGB LED code to try with your arduino kit.
 * try to modify the code in the main loop, or cut and paste the commented grey code between the dashed lines
 * to see some cool effects. 
 * You can even experiment with external input (buttons or sensors) to allow the led to change in response
 * to the enviornment!
 * Written by Yohan Sequeira, 2021
 */

//define the red pin
int RedPin = 5;

//define the red pin
int GreenPin = 6;

//define the red pin
int BluePin = 7;

void setup() {
  //set the PWM pins as outputs
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}

void loop() {
  //cut and paste the code between the dashed lines (START and END) to acheive different rgb effects!
  //---------------------------------------START--------------------------------------------------------
  //turn on the rgb led a solid color
  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 255);
  analogWrite(BluePin, 255);
   
  //----------------------------------------END---------------------------------------------------------

}



//1. this code below turns the LED on a solid color (white)
/**

//---------------------------------------START---------------------------------------------------------
//turn on the rgb led a solid color
  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 255);
  analogWrite(BluePin, 255);
//----------------------------------------END---------------------------------------------------------
 
**/

//2. this code below will fade the LED between white and yellow
/**

//---------------------------------------START---------------------------------------------------------
//fade the LED between white and yellow and back again
//fade the LED between white and yellow repeatedly 
  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 255);
  
  //fade to yellow from white
  for(int i = 255; i > 0; i--){
    analogWrite(BluePin, i);
    Serial.println(i);
    delay(10);
  }

  //fade to white from yellow
  for(int j = 0; j < 255; j++){
    analogWrite(BluePin, j);
    Serial.println(j);
    delay(10);
  }

//----------------------------------------END---------------------------------------------------------
 
**/



//3. this code makes the led blink a random color
/**

//---------------------------------------START---------------------------------------------------------
//turn on the rgb led and blink a random color

  //get the random color values for the LED
  int randomRed = random(255);
  int randomBlue = random(255);
  int randomGreen = random(255);
  
  //write to the LED pins, using analog write to turn them on with a PWM
  //between 0 and 255 which we get from the random number
  analogWrite(RedPin, randomRed);
  analogWrite(GreenPin, randomBlue);
  analogWrite(BluePin, randomGreen);
  delay(1000);

  //turn the led off
  analogWrite(RedPin, 0);
  analogWrite(GreenPin, 0);
  analogWrite(BluePin, 0);
  delay(1000);
//----------------------------------------END---------------------------------------------------------
 
**/



//4. this code below makes the rgb led blink between three different colors, red, green and blue
/**

//---------------------------------------START---------------------------------------------------------
//try to write it yourself!
//----------------------------------------END---------------------------------------------------------
 
**/



//5. this code below makes the rgb led smoothly transfer between two random colors repeatedly
/**

//---------------------------------------START---------------------------------------------------------
//turn on the rgb led and smoothly transfer between two colors
   int startColor[3] = {random(255),random(255),random(255)};
   int endColor[3] = {random(255),random(255),random(255)};

   //the current color values for the LED
   int currentColor[3] = {startColor[0],startColor[1],startColor[2]}; 

   //the color step values, we need ten steps
   int redStep = (endColor[0] - startColor[0])/10;
   int greenStep = (endColor[1] - startColor[1])/10;
   int blueStep = (endColor[2] - startColor[2])/10;

   //loop within a loop, repeat some number of times then repeat
   int j = 0;
   while(j < 5){
      
     //now we can fade to the end color
     for(int i = 0; i < 10; i++){
      //change the color
      currentColor[0] = currentColor[0] + redStep;
      currentColor[1] = currentColor[1] + greenStep;
      currentColor[3] = currentColor[3] + blueStep;
      
      //set the color
      analogWrite(RedPin, currentColor[0]);
      analogWrite(GreenPin, currentColor[1]);
      analogWrite(BluePin, currentColor[2]);
      delay(100);
     }
  
  
     //now we can fade to the start color
     for(int i = 0; i < 10; i++){
      //change the color
      currentColor[0] = currentColor[0] - redStep;
      currentColor[1] = currentColor[1] - greenStep;
      currentColor[3] = currentColor[3] - blueStep;
      
      //set the color
      analogWrite(RedPin, currentColor[0]);
      analogWrite(GreenPin, currentColor[1]);
      analogWrite(BluePin, currentColor[2]);
      delay(100);
     }

     j++;
   }
//----------------------------------------END---------------------------------------------------------
 
**/


//6. this code below makes the rgb led traverse a spectrum (rainbow) in order
/**

//---------------------------------------START---------------------------------------------------------
//try to write it yourself!
//----------------------------------------END---------------------------------------------------------
 
**/
