void setup() {
  pinMode(7, INPUT);

  pinMode(13, OUTPUT);

  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  if (digitalRead(7) == HIGH)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }

  ledOn();
}



void ledOn() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(11, 255 - i);
    analogWrite(10, i);
    analogWrite(9, 0);
    delay(10);
  }

  for (int i = 0; i <= 255; i++) {
    analogWrite(11, 0);
    analogWrite(10, 255 - i);
    analogWrite(9, i);
    delay(10);
  }

  for (int i = 0; i <= 255; i++) {
    analogWrite(11, i);
    analogWrite(10, 0);
    analogWrite(9, 255 - i);
    delay(10);
  }
}
