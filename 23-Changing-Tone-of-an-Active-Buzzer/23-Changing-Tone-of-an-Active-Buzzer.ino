int buzzerPin = 8;
int delayTime1 = 1;
int delayTime2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 100; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(delayTime1);
    digitalWrite(buzzerPin, LOW);
    delay(delayTime1);
  }

  for (int i = 0; i < 100; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(delayTime2);
    digitalWrite(buzzerPin, LOW);
    delay(delayTime2);
  }
}
