#define RED_LED 10
#define YELLOW_LED 11
#define GREEN_LED 12
#define Button 7 
#define NumberLEDs 3

byte pinsOfLEDs[NumberLEDs]={RED_LED,YELLOW_LED,GREEN_LED};
void setupMode(void){
  for(int i=0;i<NumberLEDs;i++)
      pinMode(pinsOfLEDs[i],OUTPUT);
  }

void allOFF(void){
  for(int i=0;i<NumberLEDs;i++)
    digitalWrite(pinsOfLEDs[i],LOW);
    }
void setLEDs(bool mode){
  if (mode){
  	digitalWrite(pinsOfLEDs[0],HIGH);
  	digitalWrite(pinsOfLEDs[1],LOW);
  	digitalWrite(pinsOfLEDs[2],HIGH);  
    	}
  else{
    digitalWrite(pinsOfLEDs[0],LOW);
  	digitalWrite(pinsOfLEDs[1],HIGH);
  	digitalWrite(pinsOfLEDs[2],LOW);
      }
}

void setup()
{
  pinMode(Button,INPUT);
  setupMode();
  allOFF();
  
  Serial.begin(9600);
}
 
                
void loop()
{
  bool mode =true;
  while(digitalRead(Button)==LOW){
    Serial.println(mode);
    setLEDs(mode);    
    delay(700); 	
    mode = !mode;  
      
  }
  
}