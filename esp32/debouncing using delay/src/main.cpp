#include <Arduino.h>
#define red_led 4
#define switch 35
int count[500];

void setup() {
 pinMode(red_led,OUTPUT);
 pinMode(switch,INPUT); 
}

void loop() {
 int sw1=digitalRead(switch);
 count=sw1;
  
}