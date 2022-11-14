#include <Arduino.h>
#define red_led 4
#define green_led 2
int previous_state;
int current_state=0;
int count1=2000;
int count2=4000;
int count3=7000;
int count4=11000;

void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
}

void loop() {
  previous_state=millis();
  if (previous_state<=count1)
  {
    digitalWrite(green_led,LOW);
  }
  
   else if ((previous_state>=count1) && (previous_state<=count3))
    {
    digitalWrite(green_led,HIGH);
    }
  
    if (previous_state<=count2)
    {
      digitalWrite(red_led,HIGH);
    }
    
      else if ((previous_state>=count2) && (previous_state<=count4))
      {
       digitalWrite(red_led,LOW); 
      }
    

      
    
}