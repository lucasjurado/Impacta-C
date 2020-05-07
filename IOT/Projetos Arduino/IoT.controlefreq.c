void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(analogRead(A0));
  digitalWrite(13, LOW);
  delay(analogRead(A0));
}