#include "WiFiEsp.h"
#include "SoftwareSerial.h"
#include <PubSubClient.h>
#include <dht.h>

dht DHT;
SoftwareSerial Serial1(6, 7); // RX, TX

#define DHT11_PIN A1

char* wifi_ssid = "Microembedded";
char* wifi_password = "Micro@123";

char* mqtt_server = "mqtt3.thingspeak.com";
int mqtt_port = 1883;
char* mqtt_clientID = "HQYVLx8rCBApOyUxOAUwFjI";
char* mqtt_username = "HQYVLx8rCBApOyUxOAUwFjI";
char* mqtt_password = "3thwAQR0sbo0bNGusggADwks";

char* mqtt_publish_topic = "channels/1852693/publish";

WiFiEspClient espClient;
PubSubClient client(mqtt_server,mqtt_port,espClient);
int status = WL_IDLE_STATUS;     // the Wifi radio's status

void setup_wifi() {

  // initialize serial for ESP module
  Serial1.begin(9600);
  // initialize ESP module
  WiFi.init(&Serial1);
   delay(10);
  // We start by connecting to a WiFi network
  // attempt to connect to WiFi network
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(wifi_ssid);
    // Connect to WPA/WPA2 network
    status = WiFi.begin(wifi_ssid, wifi_password);
  }
  Serial.println("You're connected to the network");
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
}


void setup() {
  Serial.begin(9600);
  setup_wifi();
}


char msg[50];

void loop() {
  
static int counter = 0;
int chk = DHT.read11(DHT11_PIN);
  
  String payload="field1=";
  payload+=DHT.temperature;
  payload+="&field2=";
  payload+=DHT.humidity;
  payload+="&status=MQTTPUBLISH";

    if (client.connect(mqtt_clientID,mqtt_username,mqtt_password)) {
    Serial.println("Connected to MQTT broker");
    Serial.print("Topic is: ");
    Serial.println(mqtt_publish_topic);
    }

  if (client.connected()){
    Serial.print("Sending payload: ");
    Serial.println(payload);
    
    if (client.publish(mqtt_publish_topic, (char*) payload.c_str())) {
      Serial.println("Publish ok");
    }
    else {
      Serial.println("Publish failed");
    }
    client.disconnect();
  }
  ++counter;
  delay(20000);
}
