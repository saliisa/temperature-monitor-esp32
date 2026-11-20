#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:z
 float temp = dht.readTemperature();
 float humidity = dht.readHumidity();

 if(!isnan(temp) && !isnan(humidity)){
    Serial.printf("Temp: %.1f C | Humidity: %.1f %%\n", temp, humidity);
 } else{
    Serial.printf("Failed to read from DHT sensor!");
 }
  delay(1000);
}
