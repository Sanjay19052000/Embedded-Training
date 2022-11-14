#include <Arduino.h>

#define green_led 2
#define red_led 4
#define blue_led 13
#define frequency 5000
#define channel 0
#define channell 1
#define channelll 2
#define resolution 8

int dutyCucle;

void setup() {
  ledcSetup(channel,frequency,resolution);
  ledcSetup(channell,frequency,resolution);
  ledcSetup(channelll,frequency,resolution);
  
  ledcAttachPin(red_led,channel);
  ledcAttachPin(green_led,channell);
  ledcAttachPin(blue_led,channelll);
}

void loop() {

 dutyCucle=map(100,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  dutyCucle=map(2,0,100,0,255);
  ledcWrite(channell,dutyCucle);
  dutyCucle=map(20,0,100,0,255);
  ledcWrite(channelll,dutyCucle);
  delay(3000);

  dutyCucle=map(0,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  dutyCucle=map(70,0,100,0,255);
  ledcWrite(channell,dutyCucle);
  dutyCucle=map(100,0,100,0,255);
  ledcWrite(channelll,dutyCucle);
  delay(3000);

  dutyCucle=map(100,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  dutyCucle=map(0,0,100,0,255);
  ledcWrite(channell,dutyCucle);
  dutyCucle=map(50,0,100,0,255);
  ledcWrite(channelll,dutyCucle);
  delay(3000);

  dutyCucle=map(100,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  dutyCucle=map(70,0,100,0,255);
  ledcWrite(channell,dutyCucle);
  dutyCucle=map(0,0,100,0,255);
  ledcWrite(channelll,dutyCucle);
  delay(3000);

  dutyCucle=map(70,0,100,0,255);
  ledcWrite(channel,dutyCucle);
  dutyCucle=map(70,0,100,0,255);
  ledcWrite(channell,dutyCucle);
  dutyCucle=map(70,0,100,0,255);
  ledcWrite(channelll,dutyCucle);
  delay(3000);

  

}
  