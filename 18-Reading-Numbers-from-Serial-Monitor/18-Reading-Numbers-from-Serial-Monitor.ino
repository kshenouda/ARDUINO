float radius;
float area;
float pi = 3.14;
String q = "What is the radius of your circle? ";
String a = "Your circle has an area of: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  // ASK
  Serial.println(q);

  // WAIT
  while (Serial.available() == 0) { 
    // while there is no data in the Serial port
  }
  
  // READ
  radius = Serial.parseFloat();
  area = pi * radius * radius;
  Serial.print(a);
  Serial.println(area);
}
