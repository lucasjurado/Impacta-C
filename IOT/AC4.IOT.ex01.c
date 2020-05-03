void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);  
}

void loop()
{
  if (analogRead(A0)>= 102){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }
  if (analogRead(A0)>= 204){
    digitalWrite(10, HIGH);
  }else{
    digitalWrite(10, LOW);
  }
  if (analogRead(A0)>= 306){
    digitalWrite(9, HIGH);
  }else{
    digitalWrite(9, LOW);
  }
  if (analogRead(A0)>= 408){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }
  if (analogRead(A0)>= 512){
    digitalWrite(7, HIGH);
  }else{
    digitalWrite(7, LOW);
  }
  if (analogRead(A0)>= 614){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }
  if (analogRead(A0)>= 716){
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(5, LOW);
  }

  if (analogRead(A0)>= 818){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }
  if (analogRead(A0)>= 920){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
  if (analogRead(A0)>= 1023){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
}
