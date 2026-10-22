int redPin = 7;
int yellowPin = 8;
int delayTime = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j = 10; j > 0; j--) {
    Serial.println(j);
    delay(delayTime);
  }
  for(int i = 0; i < 3; i++) {
    digitalWrite(redPin, HIGH);
    delay(delayTime);
    digitalWrite(redPin, LOW);
    delay(delayTime);
  }
  for(int i = 0; i < 5; i++) {
    digitalWrite(yellowPin, HIGH);
    delay(delayTime);
    digitalWrite(yellowPin, LOW);
    delay(delayTime);
  }
}
