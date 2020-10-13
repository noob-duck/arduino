int a = 0;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
  pinMode(7,INPUT);
  pinMode(A0,INPUT);
}

void loop() {
  if(digitalRead(7) == 1)
  {
    a++;
    delay(100);
    if(a == 1)
    {
     
      digitalWrite(9,HIGH);
      
    }
    if(a == 2)
    {
      
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      
    }
    if(a == 3)
    {
      
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      
    }
    if(a == 4)
    {
      
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      
    }
    if(a == 5)
     {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      
      a=0;
     }
    }
  }
