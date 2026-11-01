int potPin = A5;
int potValue;
int buzzerPin = 8;
int delayTime = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  /*
  if (potValue > 1000) {
    digitalWrite(buzzerPin, HIGH);
    delay(delayTime);
    digitalWrite(buzzerPin, LOW);
    delay(delayTime);
  }
  delay(delayTime);
  */
  while (potValue > 1000) {
    potValue = analogRead(potPin);
    Serial.println(potValue);
    digitalWrite(buzzerPin, HIGH);
  }
  digitalWrite(buzzerPin, LOW);
}