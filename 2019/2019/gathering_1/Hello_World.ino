/* 
Hello World
The program prints 'Hello World!' in the Serial Monitor. To open the Serial
Monitor press ctrl+shift+M. This exerciseis run whenever a new programming language
is being learned to make sure communication with the CPU is succesful.
*/ 

void setup() { 
// put your setup code here, to run once:
  while (!Serial){ /*conditional statement that waits for communication to begin between
    your computer and your board to ensure the message you are sending (Hello World!) is printed*/
  }//closes statement parameters

  Serial.println("Hello World!"); 
  //prints a string (set of characters) to the Serial Monitor
}

void loop() {
  // put your main code here, to run repeatedly:

}
