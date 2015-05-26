//checks for moisture using the FC-28 moisture sensor
//currently using digital input on the arduino
//for more accuracy, consider using analog input

int moisturePin = 2;
int moistureValue = 0;

void setup() {
  pinMode(moisturePin, INPUT);
  Serial.begin(57600);
  Serial.print("Starting");

}

void loop() {
  //with digital input we can only get 1 of 2 values
  //the sensor returns 0 when wet, 1 when dry
  moistureValue = digitalRead(moisturePin);
  Serial.print(moistureValue);
  delay(1000);

}
