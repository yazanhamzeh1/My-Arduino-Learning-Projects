int anaologIn,intensity;
void setup()
{
  pinMode(11, OUTPUT);
  
  
}
  

void loop()
{
  anaologIn=analogRead(A5);
  intensity=anaologIn/4;
  analogWrite(11, intensity);
  //analogWrite(11,230);
  delay(1000); // Wait for 1000 millisecond(s)
  
}