#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 3

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int check = DHT11.read(DHT11PIN);
  switch (check)
  {
    case DHTLIB_OK:
      Serial.println("OK");
      break;
    case DHTLIB_ERROR_CHECKSUM:
      Serial.println("Checksum error");
      break;
    case DHTLIB_ERROR_TIMEOUT:
      Serial.println("Time out error");
      break;
    default:
      Serial.println("Unknown error");
      break;  
  }
  Serial.print((int)DHT11.humidity);
  Serial.print((int)DHT11.temperature);
  Serial.println();
  delay(2000);

}
