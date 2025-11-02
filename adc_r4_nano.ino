void setup(){
  Serial.begin(19200);
  analogReadResolution(14); //change to 14-bit resolution
}

void loop(){
  int reading = analogRead(A3); // returns a value between 0-16383
  Serial.println(reading,10);
  delay(100);
}