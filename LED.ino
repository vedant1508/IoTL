void setup() {
  // set the mode of the pins a s GPIO and direction as OUTPUT
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  //Make LED ON
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, HIGH);
  delay(200);
  //Make LED OFF
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(13, LOW);
  delay(200);
}
