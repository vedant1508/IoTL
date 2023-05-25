#include <dht.h>

dht DHT;

#define DHT11_PIN 3
float min_t,max_t;
void setup()
{
  Serial.begin(9600);
  Serial.println("Humidity (%),\tTemperature (F)");
  min_t = 0xffff;
  max_t=0x00;
}

void loop()
{
  // READ DATA
  int chk = DHT.read11(DHT11_PIN);
  // DISPLAY DATA
  Serial.print(DHT.humidity, 1);
  Serial.print("\t");
  Serial.println((DHT.temperature*1.8)+32, 1);

  
  delay(1000);
}
//
// END OF FILE
//
