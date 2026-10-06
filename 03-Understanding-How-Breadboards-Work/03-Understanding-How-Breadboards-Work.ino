void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT); // RED
  pinMode(3, OUTPUT); // GREEN
  pinMode(2, OUTPUT); // BLUE
}

void loop() {
  // put your main code here, to run repeatedly:
  // RED - blink 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(200);
  }

  // GREEN - blink 10 times
  for (int i = 0; i < 10; i++) {
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
  }

  // BLUE - blink 15 times
  for (int i = 0; i < 15; i++) {
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);
  }

  // Pause before starting over
  delay(1000);
}