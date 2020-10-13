#include <Servo.h>

void setup() {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
 if(digitalRead(7) == HIGH)
 {
  for(int i = 0;i < 5;i++)
  {
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
  }
 }
  if(digitalRead(8) == HIGH)
  {
    for(int i = 0;i < 5;i++)
    {
      digitalWrite(10,HIGH);
      delay(500);
      digitalWrite(10,LOW);
      delay(500);
    }
  }
}
