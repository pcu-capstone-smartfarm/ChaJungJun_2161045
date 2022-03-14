#include <DHT.h>
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
}

void loop(){
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("습도: ");

  Serial.println(h);
  Serial.print("온도: ");

  Serial.println(t);
  delay(1000);
}