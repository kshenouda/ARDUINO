int readPin = A0;
int readValue;
float V2 = 0.0;
int delayTime = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin);
  V2 = (5.0/1023.0) * readValue;
  Serial.println(V2);
  delay(delayTime);
}

// 1023(2 ** 10) - 5V
// Volts      Read Values
// 0          0
// 5          1023
// V2 = (5/1023) * Read Value
// (5/1023) is the slope

// V2 before R1: 5.0V
// V2 after R1, before R2: 2.64V (330 Ohm R1 took 2.36V)
// V2 after R2: 1.93V (100 Ohm R2 took 0.43V)

// Pick out two resistors
// Repeat process 
// 1. Sketch out circuit design 
// 2. Calculate current, voltage, and resistance
// 3. Create Arduino circuit