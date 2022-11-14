#include <Arduino.h>

#define green_led 2
#define frequency 100
#define channel 0
#define resolution 8

int dutyCucle;

void setup() {
  ledcSetup(channel,frequency,resolution);
  ledcAttachPin(green_led,channel);
}

void loop() {
 dutyCucle=map(25,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

  dutyCucle=map(50,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

 dutyCucle=map(75,0,100,0,255);
  ledcWrite(channel ,dutyCucle);
  delay(1000);

 dutyCucle=map(100,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

   dutyCucle=map(75,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

  dutyCucle=map(50,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

  dutyCucle=map(25,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);

  dutyCucle=map(0,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  delay(1000);
}