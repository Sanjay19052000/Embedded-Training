#include <Arduino.h>
#define red_led 4
#define frequency 41
#define channel 0
#define resolution 8

int dutycycle;

void setup() {
  ledcSetup(channel,frequency,resolution);
  ledcAttachPin(red_led,channel);
  
}

void loop() {

dutycycle = map(75,0,100,0,255);
ledcWrite(channel,dutycycle);
delay(20);

  
}