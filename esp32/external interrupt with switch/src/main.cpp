#include <Arduino.h>
#define red_led 4
#define switch 35
int arr[500];


void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(switch,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int i;
  
  int sw1=digitalRead(switch);
  if (sw1==0)
  {
  arr[i]=sw1;
  
  i=i+1;
  Serial.println(arr[i]);
  Serial.println(i);
  if (i>=20 && i<=50)
  {
    digitalWrite(red_led,HIGH);
  }
  else
  {
    digitalWrite(red_led,LOW);
  }
 // i=0;
  }
  
  
}