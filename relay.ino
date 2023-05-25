#define RL1 2

void setup() {
  // put your setup code here, to run once:
pinMode(RL1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RL1, HIGH);
  delay(1000);
  digitalWrite(RL1, LOW);
  delay(1000);
  
}
