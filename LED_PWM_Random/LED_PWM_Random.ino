int randNum;
void setup()
{
  pinMode(11, OUTPUT);
  randomSeed(analogRead(0));
  
}
  

void loop()
{
  randNum=random(20,254);
  analogWrite(11, randNum);
  delay(1000); // Wait for 1000 millisecond(s)
  
}