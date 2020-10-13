#include <DHT.h>
#include <DHT_U.h>

DHT dht(12, DHT11);   
void setup() {
  dht.begin();
  Serial.begin(9600);
  Serial.println("DHT11 TEST");

}

void loop() {
  delay(2000);
  float t = dht.readTemperature(); 
  int h = dht.readHumidity();
  Serial.print("온도 : ");
  Serial.print(t);
  Serial.println("*C");
  Serial.print("습도 : ");
  Serial.print(h);
  Serial.println("%");
  

}
