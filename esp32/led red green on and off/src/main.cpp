#include <Arduino.h>

void setup() {
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);

}

void loop() {
 digitalWrite(4,HIGH);
 delay(4000);

 digitalWrite(2,LOW);
 delay(2000);

 digitalWrite(2,HIGH);
 delay(5000);

 digitalWrite(4,LOW);
 delay(7000);


 
 

}