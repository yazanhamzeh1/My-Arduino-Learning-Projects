#define RED_LED 10
#define YELLOW_LED 11
#define GREEN_LED 12
#define Button A5 
void setup()
{
  
  
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  Serial.begin(9600);
    
}
 
                
void loop()
{
  bool mode =true;
  while(digitalRead(Button)==LOW){
    mode = !mode;
    Serial.println(analogRead(Button));
    if (mode){
  	digitalWrite(GREEN_LED,HIGH);
  	digitalWrite(RED_LED,HIGH);
  	digitalWrite(YELLOW_LED,LOW);  
    delay(300);
	}
  else{
    digitalWrite(GREEN_LED,LOW);
  	digitalWrite(RED_LED,LOW);
  	digitalWrite(YELLOW_LED,HIGH);
    delay(300);
    }  
    
  }
  
}