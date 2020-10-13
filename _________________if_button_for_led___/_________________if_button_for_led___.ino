void setup() {
  pinMode(A0,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  if(analogRead(A0) < 342)
  {
    if(digitalRead(8) == 1)
    {
      for(int a = 0;a < 5;a++)
      {
        digitalWrite(9,HIGH);
        delay(500);
        digitalWrite(9,LOW);
        delay(500);
      }
    }
  }
  else if(analogRead(A0) > 341 and analogRead(A0) < 683)
  {
    if(digitalRead(8) == 1)
    {
      for(int a = 0; a < 5;a++)
      {
        digitalWrite(10,HIGH);
        delay(500);
        digitalWrite(10,LOW);
        delay(500); 
      }
    }
   
  }
  else if(analogRead(A0) > 682)
  {
    if(digitalRead(8) == 1)
    {
      for(int a = 0;a < 5;a++)
      {
       digitalWrite(11,HIGH);
       delay(500);
       digitalWrite(11,LOW);
       delay(500);
      }
    }
  }
}
