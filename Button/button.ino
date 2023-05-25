void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(12,INPUT);
pinMode(13,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(10)== 1)
  digitalWrite(6,HIGH);
else
  digitalWrite(6,LOW); 

if(digitalRead(11)== 1)
  digitalWrite(7,HIGH);
else
  digitalWrite(7,LOW); 

if(digitalRead(12)== 1)
  digitalWrite(8,HIGH);
else
  digitalWrite(8,LOW); 

if(digitalRead(13)== 1)
  digitalWrite(9,HIGH);
else
  digitalWrite(9,LOW);        
}
