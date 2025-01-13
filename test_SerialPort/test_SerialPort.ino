void setup() {
  // enable serial port at 9600 baud rate:
Serial.begin(9600);
// Print something
Serial.println("Start Communication");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("In the Loop");
  delay(500);

}
