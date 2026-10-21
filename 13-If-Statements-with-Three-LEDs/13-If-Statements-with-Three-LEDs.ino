int redPin = 11;
int yellowPin = 12;
int greenPin = 13;
int readPin = A5;
float readVal;
float V2;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Calculate read value and voltage values
  readVal = analogRead(readPin);
  V2 = (5.0/1023.0) * readVal;

  // Print read value and voltage value
  Serial.print("Potentiometer voltage: ");
  Serial.print(V2);
  Serial.print(", Read value: ");
  Serial.println(readVal);

  // Light green LED if voltage is < 3
  if (V2 < 3.0) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  }

  // Light yellow LED if voltage is between 3 and 4
  if (V2 >= 3.0 && V2 <= 4.0) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
  }

  // Light red LED if voltage is > 4
  if (V2 > 4.0) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }

  delay(delayTime);
}