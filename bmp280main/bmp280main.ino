#include <Wire.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; // I2C

int relay =8;  
void setup() {
  pinMode(relay,OUTPUT);
  digitalWrite(relay,LOW);
  Serial.begin(9600);
  
  Serial.println(F("BMP280 test"));

  if (!bmp.begin()) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (1); 
  }
}

void loop() {
    if (bmp.readPressure()<101000){
      digitalWrite(relay,HIGH);}
    if (bmp.readPressure()>102000){
      digitalWrite(relay,LOW);
       }
    Serial.print(F("Temperature = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");

    Serial.print(F("Pressure = "));
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");

    Serial.print(F("Approx altitude = "));
    Serial.print(bmp.readAltitude(1013.25)); /* điều chỉnh theo vị trí */
    Serial.println(" m");
    
    Serial.println();
    delay(1000);
}
