#define PWM_PIN 11
void setup()
{
  pinMode(PWM_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int indx=0;indx<=255;indx++){
    analogWrite(PWM_PIN,indx);
    delay(20);
  }

  for (int indx=255;indx>=0;indx--){
    analogWrite(PWM_PIN,indx);
    delay(20);
  }
  
}