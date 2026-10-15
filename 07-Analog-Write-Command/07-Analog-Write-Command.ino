int redPin = 11;
int noBright = 0;
int lowBright = 50;
int mediumBright = 100;
int highBright = 200;
int fullBright = 255;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, noBright);
  delay(delayTime);
  analogWrite(redPin, lowBright);
  delay(delayTime);
  analogWrite(redPin, mediumBright);
  delay(delayTime);
  analogWrite(redPin, highBright);
  delay(delayTime);
  analogWrite(redPin, fullBright);
  delay(delayTime);
}
