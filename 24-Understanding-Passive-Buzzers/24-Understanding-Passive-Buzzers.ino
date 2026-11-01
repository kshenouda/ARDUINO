int potPin = A5;
float potVal;
float buzzVal;
int buzzPin = 8;
int buzzTime1 = 1;
int buzzTime2 = 1;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  buzzVal = (9940.0/1023.0) * potVal + 60;
  Serial.println(buzzVal);
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzVal);
}

/*
0    - 60
1023 - 10,000
(10,000 - 60) / (1023 - 0)
9940 / 1023
9.716 (slope)
*** Use slope formula then point-slope formula
tone = 9.716 * potVal + 60
*/