int readPin = A0;
int redPin = 13;
float readVal;
float V2;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // 1. Read value from potentiometer
  readVal = analogRead(readPin);

  // 2. Convert read value to voltage
  V2 = (5.0/1023.0) * readVal;

  // 3. Print read value to voltage to serial monitor
  Serial.print("Potentiometer voltage: ");
  Serial.print(V2);
  Serial.print(", Read value: ");
  Serial.println(readVal);

  // 4. Create condition for LED to light
  if(V2 >= 4.0) {
    digitalWrite(redPin, HIGH);
  } else {
    digitalWrite(redPin, LOW);
  }

  delay(delayTime);
}
