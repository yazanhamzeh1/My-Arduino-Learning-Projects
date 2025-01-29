#define Button_PIN 2
#define LED_PIN 12
void setup() {
  pinMode(Button_PIN,INPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(Button_PIN) == HIGH){
    Serial.println("Button Pressed");
    digitalWrite(LED_PIN,HIGH);
  }
  else{
    Serial.println("Button Not Pressed");
    digitalWrite(LED_PIN,LOW);
  }
  delay(100);

}
