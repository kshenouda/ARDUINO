int redPin = 7;
int greenPin = 10;
int bluePin = 13;
String color;
String msg = "What color would you like to light? ";

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // ASK
  Serial.println(msg);

  // WAIT
  while (Serial.available() == 0) {

  }

  // READ
  color = Serial.readString();
  if (color == "RED" || color == "Red" || color == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if (color == "GREEN" || color == "Green" || color == "green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  } else if (color == "BLUE" || color == "Blue" || color == "blue") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  } else if (color == "ALL" || color == "All" || color == "all") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    Serial.println("Please input either 'red', 'green', or 'blue'");
  }
}

/*
Hook up circuit with 3 LEDs: red, green, and blue
ASK user what LED they would like to light up
READ color, and light the LED requested by user
*/
