#include <Arduino.h>
#include<time.h>
bool a=0;

void setup() {
  a=getLocalTime;
  Serial.begin(9600);
}

void loop() {
  digitalRead(a);
  Serial.println(a);
  
}