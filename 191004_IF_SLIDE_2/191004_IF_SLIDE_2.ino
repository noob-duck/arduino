void setup() {
  pinMode(A0,INPUT); 
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0) <= 341)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if(digitalRead(8) == 1)
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    }
  }
  else if(analogRead(A0) > 341 && analogRead(A0) <= 682)
  {
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    if(digitalRead(8) == 1)
    {
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
    }
  }
  else if(analogRead(A0) > 682)
  {
    digitalWrite(11,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    if(digitalRead(8) == 1)
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
    }
  }
}
