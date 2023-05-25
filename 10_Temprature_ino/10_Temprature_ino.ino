int baselineTemp = 0;
int celsius = 0;
int fahrenheit = 0;
void setup(){
    pinMode(A2, INPUT);
    Serial.begin(9600);
}
void loop()
{
  celsius = map(((analogRead(A2) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  delay(1000);
}
