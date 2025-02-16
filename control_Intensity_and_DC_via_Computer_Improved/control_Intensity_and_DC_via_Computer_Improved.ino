// control intensity of the red LED from the poteniomenter
// control the duty cycle of the Green LED from serial communication
#define RED_LED 10
#define GREEN_LED 11
#define INTENSITY_IN A0
long intInput=101;
int dutyCycleGreen=593;
long startTimeGreen, elapsedTimeGreen;
int greenLED_State;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(10);
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  greenLED_State = LOW;
  startTimeGreen=millis();

}

void loop() {
  
  
  elapsedTimeGreen = millis() - startTimeGreen;
  int data;
  if(Serial.available()>0){
    data=Serial.parseInt();
    if (data >100 && data <4000)
      dutyCycleGreen = data;
  }

  if(elapsedTimeGreen >= dutyCycleGreen){
    if(greenLED_State == HIGH)
      greenLED_State = LOW;
    else
      greenLED_State = HIGH;
    analogWrite(GREEN_LED,greenLED_State);
    startTimeGreen += dutyCycleGreen;
  }
  
  intInput = analogRead(INTENSITY_IN)/4;
  analogWrite(RED_LED,intInput);
  //Serial.println(intInput);
  //Serial.println(dutyCycleGreen);
    
}
      


    
    