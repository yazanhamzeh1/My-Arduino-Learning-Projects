#define RED_LED 10
#define YELLOW_LED 11
#define GREEN_LED 12
#define Button A5 
void setup()
{
  
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
    
}
 
                
void loop()
{
  bool mode =true;
  while(analogRead(Button)==LOW){
    mode = !mode;
    delay(300);
    if (mode){
  	digitalWrite(GREEN_LED,HIGH);
  	digitalWrite(RED_LED,HIGH);
  	digitalWrite(YELLOW_LED,LOW);  
	}
  else{
    digitalWrite(GREEN_LED,LOW);
  	digitalWrite(RED_LED,LOW);
  	digitalWrite(YELLOW_LED,HIGH);
    }  
    
  }
  
}