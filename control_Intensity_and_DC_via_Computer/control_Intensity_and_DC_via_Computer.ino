#define RED_LED 10
#define GREEN_LED 12
long intInput=120;
int dutyCycle=120;
long Delay=1000;  
void setup() {
  Serial.begin(115200);
  Serial.setTimeout(10);
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);

}

void loop() {
  
  
  if(Serial.available()>0){
    intInput=Serial.parseInt();
    
  }

  digitalWrite(GREEN_LED,HIGH);
  delay(Delay);
  digitalWrite(GREEN_LED,LOW);
  delay(Delay);
  analogWrite(RED_LED,dutyCycle);
  if (intInput>255)
    Delay = intInput;
  else
    dutyCycle = intInput;
  Serial.println(intInput);
  Serial.println(Delay);
  Serial.println(dutyCycle);
  
}
      


    
    