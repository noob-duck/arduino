void setup() {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop() {
  if(digitalRead(8) == 1 && digitalRead(7) == 0)
  {
    digitalWrite(10,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    delay(250);
    digitalWrite(10,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    delay(250);
    digitalWrite(10,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    delay(250);
  }
  else if (digitalRead(7) == 1 && digitalRead(8) == 0)
  {
    digitalWrite(11,HIGH);
    delay(250);
    digitalWrite(11,LOW);
    delay(250);
    digitalWrite(11,HIGH);
    delay(250);
    digitalWrite(11,LOW);
    delay(250);
    digitalWrite(11,HIGH);
    delay(250);
    digitalWrite(11,LOW);
    delay(250);
  }
}
