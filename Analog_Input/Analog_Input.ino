#define POTENTIOMETER_PIN A1
#define LED_PIN 11
long inputValue;
long Brightness;
void setup() {
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  inputValue=analogRead(POTENTIOMETER_PIN);
  
  Brightness=(inputValue*255)/1023;
  Serial.println(Brightness);
  Serial.println(inputValue);
  analogWrite(LED_PIN,Brightness);
   
  delay(100);

}
