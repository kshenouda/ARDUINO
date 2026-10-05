void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); // RED
  pinMode(6, OUTPUT); // GREEN
  pinMode(5, OUTPUT); // BLUE
}

void loop() {
  // put your main code here, to run repeatedly:
  // RED - blink 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(200);
  }

  // GREEN - blink 10 times
  for (int i = 0; i < 10; i++) {
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(200);
  }

  // BLUE - blink 15 times
  for (int i = 0; i < 15; i++) {
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(200);
  }

  // Pause before starting over
  delay(1000);
}