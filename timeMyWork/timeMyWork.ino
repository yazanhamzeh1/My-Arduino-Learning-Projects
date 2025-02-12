unsigned long timeNow_ms;
unsigned long timeNow_us;
unsigned long elapsedTime_ms;
unsigned long elapsedTime_us;

void setup() {
  Serial.begin(115200);
  timeNow_ms = millis();
  timeNow_us = micros();
  
  //Serial.print("Printing took ");
  

}

void loop() {
  
  elapsedTime_us = micros() - timeNow_us;
  elapsedTime_ms = millis() - timeNow_ms;

  if(elapsedTime_ms>500){
    Serial.println("500 ms point");
    Serial.println(millis());
    timeNow_ms += 500;
  }
  // else if (elapsedTime_us>730000){
  //   Serial.println("73000 ms point");
  //   timeNow_us += 730000;
  // }








}
