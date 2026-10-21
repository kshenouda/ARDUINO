int readPin = A0;
float readVal;
float V2;
int delayTime(100);

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // 1. Read value from potentiometer
  readVal = analogRead(readPin);
  
  // 2. Convert read value to voltage
  V2 = (5.0/1023.0) * readVal;
  
  // 3. Print read value and voltage to serial monitor
  Serial.print("Read value: ");
  Serial.print(readVal);
  Serial.print(", Voltage: ");
  Serial.println(V2);
  delay(delayTime);
}
