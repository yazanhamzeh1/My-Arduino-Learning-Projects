#define BUTTON_PIN 7
byte buttonState,readState; 
unsigned long lastTimeButtonChanged, debounceDelay,timeNow; 
void setup() {
  buttonState = LOW;
  Serial.begin(115200);
  pinMode(BUTTON_PIN,INPUT);
  debounceDelay = 10;
  lastTimeButtonChanged = millis();

}

void loop() {
  timeNow = millis();
  // only read value every debounceTime
  if(timeNow - lastTimeButtonChanged   > debounceDelay){
    readState=digitalRead(BUTTON_PIN);
    if(readState !=buttonState ){
      lastTimeButtonChanged = timeNow;
      buttonState = readState;
      if(buttonState == LOW)
        Serial.println("Button Release");
      else
        Serial.println("Button Pressed");

  }

  }
  

}
