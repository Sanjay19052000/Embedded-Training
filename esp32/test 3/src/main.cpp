#include <Arduino.h>

#define LED_PIN 4
#define Switch 35
int prevstate;
int currentstate;

void setup()
 {
  pinMode(LED_PIN, OUTPUT);
  pinMode(Switch, INPUT);
  digitalWrite(currentstate, HIGH);
  digitalWrite(prevstate,HIGH);
}

void loop() {
int sw1=digitalRead(Switch);

if (sw1==LOW)
{
  currentstate=LOW;
  if (currentstate==prevstate)
{
  digitalWrite(LED_PIN,HIGH);
}

}




}


 

  