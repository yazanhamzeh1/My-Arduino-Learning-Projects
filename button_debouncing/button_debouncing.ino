#define BUTTON_PIN 7
byte buttonState,readState; 
  
void setup() {
  buttonState = LOW;
  Serial.begin(115200);
  pinMode(BUTTON_PIN,INPUT);

}

void loop() {
  readState=digitalRead(BUTTON_PIN);
  if(readState !=buttonState ){
    buttonState = readState;
    Serial.println(buttonState);
  }

}
