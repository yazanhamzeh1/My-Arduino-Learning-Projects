// Toggle LED2 and LED3 when ever a button is pressed
// Blink LED 1 at a rate defined by Potentiometer feed 
#define BUTTON_PIN 7
#define POTENTIOMETER A0
#define LED1_PIN 10
#define LED2_PIN 11
#define LED3_PIN 12
byte buttonState,readState,LED_Intensity,stateLED3,stateLED2;
unsigned long lastTimeButtonChanged, debounceDelay,timeNow; 
void setup() {
  pinMode(LED1_PIN,OUTPUT);
  pinMode(LED2_PIN,OUTPUT);
  pinMode(LED3_PIN,OUTPUT);
  pinMode(BUTTON_PIN,INPUT);
  buttonState = LOW;
  stateLED3 = HIGH;
  stateLED2 = LOW;
  digitalWrite(LED2_PIN,stateLED2);
  digitalWrite(LED3_PIN,stateLED3);
  Serial.begin(115200);
  debounceDelay = 10;
  lastTimeButtonChanged = millis();

}

void toggleLEDs(void){
  byte tempState = stateLED3;
  stateLED3 = stateLED2;
  stateLED2 = tempState;
  digitalWrite(LED2_PIN,stateLED2);
  digitalWrite(LED3_PIN,stateLED3);
}

void loop() {
  timeNow = millis();
  // only read value every debounceTime
  if(timeNow - lastTimeButtonChanged   > debounceDelay){
    readState=digitalRead(BUTTON_PIN);
    if(readState !=buttonState ){
      lastTimeButtonChanged = timeNow;
      buttonState = readState;
      if(buttonState == HIGH)
        toggleLEDs();       

  }
  }
  LED_Intensity = analogRead(POTENTIOMETER)/4;
  analogWrite(LED1_PIN,LED_Intensity);
  }
  


