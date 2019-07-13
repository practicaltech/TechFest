### Q: I see print when in the loop but not in setup for this code:
void setup() {
  // put your setup code here, to run once:
  
  Serial.println("hello world\n");
}

void loop() {
  // put your main code here, to run repeatedly:
}

**A**: *From online answers and intuition, this is probably timing. After all, setup is being run only once, at machine speed, which is insanely fast. Therefore it’s more than plausible that whatever code in setup ran before the board could connect to serial. This is not a problem in loop() since whatever’s in there just keeps running over and over again. Online, people have remedied this by manually adding a delay or telling the board to wait until serial is ready.*

*Adding a delay will allow enough time for the printed text to appear. Alternatively you can add a while statement that waits for the serial port to connect. **Checkout the Hello_World.ino file**
