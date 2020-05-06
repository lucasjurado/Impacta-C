void setup()
{
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (analogRead(A1) >= 204) digitalWrite(13,HIGH);
  else digitalWrite(13,LOW);
}