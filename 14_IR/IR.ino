void setup() {
pinMode(3, OUTPUT);
pinMode(10, INPUT);
}
void loop() {
int hasObstacle = digitalRead(10);
if (hasObstacle == 1) {
digitalWrite(3, HIGH);
}
else {
digitalWrite(3, LOW);
}
delay(200);
}
