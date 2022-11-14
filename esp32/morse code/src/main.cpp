#include <Arduino.h>
#define red_led 4
char alphabet;
char alph,c;
int8_t arr[8];
int number,i=0,rem,quot;


void setup() {
 pinMode(red_led,OUTPUT);
  Serial.begin(9600);
   Serial.println("Enter the alphabet");  
    while (Serial.available() == 0) {} 

      alphabet= Serial.read();
    number=alphabet;

     for (i=0;i<8;i++)
    {
    rem=number%2;
    number=number/2;
    //Serial.println(rem);
    arr[i]=rem;
    Serial.println(number);
    }
  for (i=8;i>=0;i--)
  {
    if (arr[i]==1)
    {
      digitalWrite(red_led,HIGH);
      delay(2000);
      digitalWrite(red_led,LOW);
      delay(1000);
    }
    else if (arr[i]==0)
    {
      digitalWrite(red_led,HIGH);
      delay(700);
      digitalWrite(red_led,LOW);
      delay(1000);
    }
  }
    
}

void loop() {
    

}