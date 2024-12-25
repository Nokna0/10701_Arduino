// 02 조이스틱으로 LED 제어

int if_push = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
}

void loop()
{
  Serial.print(analogRead(A1));
  Serial.print("  ");
  Serial.print(analogRead(A0));
  Serial.print("  ");
  Serial.println(digitalRead(8));
  delay(100);

  led();
}

void led()
{
  if (digitalRead(8) == 1)
  {
    if_push = 1023;
  }
  else
  {
    if_push = 0;
  }

  analogWrite(A3, analogRead(A1));
  analogWrite(A4, analogRead(A0));
  analogWrite(A5, if_push);
}
