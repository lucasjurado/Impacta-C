void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Lampada Acesa");
  } else {
    digitalWrite(13, LOW);
    Serial.println("Lampada Apagada");    
  }
}