int anaologIn,intensity;
#define RED_LED 10
#define YELLOW_LED 11
#define GREEN_LED 12
void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  Serial.begin(9600);
  
  
}
  

void loop()
{
  anaologIn=analogRead(A5);
  Serial.println(anaologIn);
  intensity=anaologIn/4;
  analogWrite(RED_LED, intensity);
  delay(3000);
  analogWrite(RED_LED, 0);
  analogWrite(GREEN_LED, intensity);
  delay(3000);
  analogWrite(GREEN_LED, 0);
  analogWrite(YELLOW_LED, intensity);
  delay(1000);
  analogWrite(YELLOW_LED, 0);

  
  
  
}