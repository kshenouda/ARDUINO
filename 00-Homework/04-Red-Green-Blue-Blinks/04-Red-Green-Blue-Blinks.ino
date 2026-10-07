int redPin = 0;
int greenPin = 6;
int bluePin = 12;
int redDelay = 250;
int greenDelay = 500;
int blueDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // RED - blink 5 times fast
  for(int i = 0; i < 5; i++) {
    digitalWrite(redPin, HIGH);
    delay(redDelay);
    digitalWrite(redPin, LOW);
    delay(redDelay);
  }

  // GREEN - blink 10 times slow
  for(int i = 0; i < 10; i++) {
    digitalWrite(greenPin, HIGH);
    delay(greenDelay);
    digitalWrite(greenPin, LOW);
    delay(greenDelay);
  }

  // BLUE - blink 15 times real slow
  for(int i = 0; i < 15; i++) {
    digitalWrite(bluePin, HIGH);
    delay(blueDelay);
    digitalWrite(bluePin, LOW);
    delay(blueDelay);
  }

  delay(2000);
}