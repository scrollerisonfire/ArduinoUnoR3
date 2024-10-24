#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

// DHT sensor settings
#define DHTPIN 8      // Pin for DHT22
#define DHTTYPE DHT22 // Define sensor type

DHT dht(DHTPIN, DHTTYPE);

// LCD pin configuration
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  // Initialize the LCD
  lcd.begin(16, 2);
  lcd.print("Humidity & Temp");
}

void loop() {
  delay(2000);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    lcd.setCursor(0, 1);
    lcd.print("Read error!");
    return;
  }

  // Print to serial monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  Temp: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(2000);
  // Display on LCD
  lcd.setCursor(0, 1);
  lcd.print("H:");
  lcd.print(humidity);
  lcd.print("% T:");
  lcd.print(temperature);
  lcd.print("C");
}
