void setup() {
  // set up port 13 as DO
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
// Print something
Serial.println("Start Communication");

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
