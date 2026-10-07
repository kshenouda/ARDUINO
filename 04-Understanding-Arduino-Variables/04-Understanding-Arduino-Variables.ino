int redPin = 4;
int dot = 100;
int dash = 250;
int longDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++) { // Morse code for S: . . .
    digitalWrite(redPin, HIGH);
    delay(dot);
    digitalWrite(redPin, LOW);
    delay(dot);
  }
  delay(300);
  for(int i = 0; i < 3; i++) { // Morse code for O: - - - 
    digitalWrite(redPin, HIGH);
    delay(dash);
    digitalWrite(redPin, LOW);
    delay(dash);
  }
  delay(300);
  for(int i = 0; i < 3; i++) { // Morse code for S: . . .
    digitalWrite(redPin, HIGH);
    delay(dot);
    digitalWrite(redPin, LOW);
    delay(dot);
  }
  delay(longDelay);
}