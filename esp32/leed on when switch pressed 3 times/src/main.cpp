#include <Arduino.h>
#define red_led 4
#define switch 35
//#define aaa 
int aaa;


void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(switch,INPUT);
  Serial.begin(9600);

}

void loop() {
  int sw1=digitalRead(switch);
  delay(200);
  sw1=digitalRead(switch);
  if (sw1==0)
  {
     aaa= aaa+1;
     Serial.println(aaa);
  }
  if (aaa%3==0)
  {
    digitalWrite(red_led,HIGH);
    
  }
  if ((aaa%6==0) )
  {
    digitalWrite(red_led,LOW);
  }
  
  
}