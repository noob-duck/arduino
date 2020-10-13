void setup() {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  Serial.print("touch : ");
  Serial.println(digitalRead(7));
  Serial.print("button : ");
  Serial.println(digitalRead(8));
  if(digitalRead(7) == LOW && digitalRead(8) == LOW)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  else if(digitalRead(7) == HIGH && digitalRead(8) == LOW)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else if(digitalRead(7) == LOW && digitalRead(8) == HIGH)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
//  else if(digitalRead(7) == HIGH && digitalRead(8) == HIGH)
//  {
//    digitalWrite(9,HIGH);
//    digitalWrite(10,HIGH);
//    digitalWrite(11,HIGH);
//  }
}
