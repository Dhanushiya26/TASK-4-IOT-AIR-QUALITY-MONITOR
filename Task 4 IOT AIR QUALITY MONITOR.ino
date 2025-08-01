#include <LiquidCrystal.h>

// LCD RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int airSensorPin = A0;  // Simulated MQ135 (via potentiometer)
int sensorValue = 0;
float ppm = 0.0;

void setup() {
  lcd.begin(16, 2);       // 16 columns, 2 rows
  Serial.begin(9600);     // Simulate cloud connection

  lcd.setCursor(0, 0);
  lcd.print("Air Quality:");
}

void loop() {
  sensorValue = analogRead(airSensorPin);
  ppm = map(sensorValue, 0, 1023, 400, 2000);  // Map to PPM range

  lcd.setCursor(0, 1);
  lcd.print(ppm);
  lcd.print(" PPM      "); // Clear trailing chars

  Serial.print("Uploading to cloud: ");
  Serial.print(ppm);
  Serial.println(" PPM");

  delay(2000);
}
