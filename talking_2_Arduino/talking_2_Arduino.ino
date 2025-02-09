void setup() {
  Serial.begin(115200);
  Serial.setTimeout(10);

}

void loop() {
  float intInput;
  String stringInput;
  if(Serial.available()>0){
    //intInput=Serial.parseFloat();
    stringInput=Serial.readString();
    Serial.print(stringInput);
    //Serial.print(sqrt(intInput));
    Serial.println();
  }

}
