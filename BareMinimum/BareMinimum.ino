void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn the LED on
  delay(20); // in milliseconds
  digitalWrite(13, LOW); // turn the LED off
  delay(20);
}
