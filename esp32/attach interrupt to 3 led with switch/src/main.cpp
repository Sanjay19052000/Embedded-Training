#include <Arduino.h>
#define red_led 4
#define green_led 2
#define blue_led 13
#define interruptPin 35
#define interruptPin1 36
#define interruptPin2 34

void blink();
int state=0;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(interruptPin1, INPUT_PULLUP);
  pinMode(interruptPin2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
  attachInterrupt(digitalPinToInterrupt(interruptPin1), blink, CHANGE);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), blink, CHANGE);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(red_led, state);
  delay(500);
 // digitalWrite(red_led,!state);
  //Serial.println(interruptPin);
  digitalWrite(green_led, state);
  delay(500);
 // digitalWrite(green_led,!state);
  digitalWrite(blue_led, state);
  delay(500);
 // digitalWrite(blue_led,!state);
}

void blink() {
  state = !state;
}