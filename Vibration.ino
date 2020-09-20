const int PIEZO_PIN = A0; // Piezo output

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int piezoADC = analogRead(PIEZO_PIN);
  float piezoV = piezoADC / 1023.0 * 5.0;
  Serial.println(piezoV); 
  Serial.println(piezoADC);
  delay(1000);
}
