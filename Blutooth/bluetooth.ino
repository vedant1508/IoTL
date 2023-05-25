#include<SoftwareSerial.h>

#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(6,7); /* (Rx,Tx) */  

void setup() {
  bt.begin(9600); /* Define baud rate for software serial communication */
  Serial.begin(9600); /* Define baud rate for serial communication */
  Serial.println("Bluetooth ");
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
 char input;
 if (bt.available()) /* If data is available on serial port */
 {
   input = bt.read();
   Serial.write(input); /* Print character received on to the serial monitor */
  
  if(input == '0')
  {
  Serial.println("Device OFF");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  }

  if(input == '1')
  {
  Serial.println("Device ON");  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  }
  }
}
