void setup(){
  Serial.begin(9600);
}

void loop(){
  int soilMosture = analogRead(A0);
  Serial.print("Soil Moisure: ");
  Serial.println(soilMosture);
  delay(1000);
}
