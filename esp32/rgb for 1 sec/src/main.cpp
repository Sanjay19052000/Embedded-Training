#include <Arduino.h>

void setup() {
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
}