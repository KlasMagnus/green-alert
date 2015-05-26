#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 3

void setup() {
  Serial.begin(57600);
  Serial.println("Starting sensor test.");

}

void loop() {
  
  int check = DHT11.read(DHT11PIN);
  Serial.println("Reading sensor.");
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
  
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);
  Serial.print("Temperature (°C): ");
  Serial.println((float)DHT11.temperature, 2);
  delay(2000);

}
