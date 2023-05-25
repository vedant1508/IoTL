
const int red_led  = 3;
const int green_led = 5;
const int blue_led    = 6;

unsigned int counter;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  
}

void loop() {
counter = counter+1;
delay(200);

if(counter <= 100)
{
  digitalWrite(blue_led,HIGH);
  digitalWrite(green_led,LOW);
  digitalWrite(red_led,HIGH);
  }

else if((counter > 100)&& (counter <= 200))
{
  digitalWrite(blue_led,LOW);
  digitalWrite(green_led,HIGH);
  digitalWrite(red_led,HIGH);
  }

else if(counter > 200)
{
  digitalWrite(blue_led,HIGH);
  digitalWrite(green_led,HIGH);
  digitalWrite(red_led,LOW);
  }

if (counter > 210) counter =0;  
}
