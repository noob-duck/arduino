#include <Servo.h>
Servo sv;

void setup(){
  sv.attach(3);
  

}

void loop() {
  for(int i = 0;i < 180;i++)
  {
    sv.write(i);
    delay(10);
  }
  for(int i =180;i > 0;i--)
  {
    sv.write(i);
    delay(10);
  }
}
