void setup() {
  Serial.begin(9600);

}

void loop() {
  int intInput;
  if(Serial.available()>0){
    intInput=Serial.parseInt();
    Serial.print(sqrt(intInput));
    Serial.println();
  }

}
