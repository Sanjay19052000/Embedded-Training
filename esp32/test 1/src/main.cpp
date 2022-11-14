#include <Arduino.h>

int preMillis=0;
int timer1=3000;
int timer2=5000;
//int curMilly=0;
int ledPin=4;


void setup() {

  pinMode(ledPin,OUTPUT);
  
}

void loop() {
  
int curMilly=millis();
  if (curMilly-preMillis>=timer1)
  {
    preMillis=curMilly;
    if (4==LOW)
    {
      digitalWrite(4,HIGH);
    }
  }
  
  if (curMilly-preMillis>=timer2)
  {
    preMillis=curMilly;
    digitalWrite(4,LOW);;

  }

    
   
  
  

}