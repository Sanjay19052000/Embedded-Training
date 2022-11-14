#include <Arduino.h>
#define red_led 4
#define relay 25

void setup() {
  pinMode(relay,OUTPUT);
  pinMode(red_led,OUTPUT);
  
}

void loop() {
  digitalWrite(relay,HIGH);
  digitalWrite(red_led,HIGH);
  delay(1000);
  digitalWrite(relay,LOW);
  
    
  
        digitalWrite(red_led,LOW);
        delay(1000);


}