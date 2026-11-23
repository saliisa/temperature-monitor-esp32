#include <Arduino.h>
#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width in pixels
#define SCREEN_HEIGHT 64 // OLED display height in pixels

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println(F("SSD1306 allocation failed"));
    while (true)
      ;
  }

  // delay(2000);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Starting...");
  display.display();
  delay(2000);
  dht.begin();
}

void loop()
{
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  display.clearDisplay();
  display.setCursor(0, 0);
  if (!isnan(temp) && !isnan(humidity))
  {

    display.println("Temp: ");

    display.print(temp, 1);
    display.println(" C");
    display.print("Humidity: ");
    display.print(humidity, 1);
    display.println(" %");
    // Serial.printf("Temp: %.1f C | Humidity: %.1f %%\n", temp, humidity);
  }
  else
  {
    Serial.printf("Failed to read from DHT sensor!");
  }
  display.display();
  delay(1000);
}
