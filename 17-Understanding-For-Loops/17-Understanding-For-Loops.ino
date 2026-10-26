int potPin = A5;
int redLED = 9;
int potValue;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(delayTime);

  while (potValue > 1000) {
    digitalWrite(redLED, HIGH);
    potValue = analogRead(potPin);
    Serial.println(potValue);
    delay(delayTime);
  }
  digitalWrite(redLED, LOW);
}
