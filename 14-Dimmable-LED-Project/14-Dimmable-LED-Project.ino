int readPin = A5;
int greenLED = 11;
float readVal;
float V2;
float brightness;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5.0/1023.0) * readVal;
  brightness = (255.0/1023.0) * readVal; // brightness to be between 0 and 255

  analogWrite(greenLED, brightness);

  Serial.print("Potentiometer voltage: ");
  Serial.print(V2);
  Serial.print(", Read value: ");
  Serial.print(readVal);
  Serial.print(", LED brightness: ");
  Serial.println(brightness);
}