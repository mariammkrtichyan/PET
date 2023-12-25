#include "Adafruit_PM25AQI.h"
#include <SoftwareSerial.h>

SoftwareSerial pmSerial1(2, 3);  // SoftwareSerial for first sensor
SoftwareSerial pmSerial2(4, 5);  // SoftwareSerial for second sensor

Adafruit_PM25AQI aqi1 = Adafruit_PM25AQI();  // Sensor 1
Adafruit_PM25AQI aqi2 = Adafruit_PM25AQI();  // Sensor 2

unsigned int selectedSensor = 1;

void setup() {
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  Serial.println("Adafruit PMSA003I Air Quality Sensor");

  delay(1000);

  pmSerial1.begin(9600);
  pmSerial2.begin(9600);

  pmSerial1.listen();

  if (!aqi1.begin_UART(&pmSerial1)) {
    Serial.println("Could not find PM 2.5 sensor 1!");
    while (1)
      delay(10);
  }

  if (!aqi2.begin_UART(&pmSerial2)) {
    Serial.println("Could not find PM 2.5 sensor 2!");
    while (1)
      delay(10);
  }

  Serial.println("PM25 sensors found!");
}

void loop() {
  
  if(selectedSensor == 1)
  {
    PM25_AQI_Data data1;
    if (!aqi1.read(&data1)) {
      Serial.println("Could not read from AQI sensor 1");
      delay(500);
      return;
    }
    else
    {
      Serial.println("AQI reading success");

      // Display data for Sensor 1
      Serial.println();
      Serial.println("Sensor 1 Data:");
      displayData(data1);

      selectedSensor = 2;
      pmSerial2.listen();
    }
  }
  else if(selectedSensor == 2)
  {
    // Read data from Sensor 2
    PM25_AQI_Data data2;
    if (!aqi2.read(&data2)) {
      Serial.println("Could not read from AQI sensor 2");
      delay(500);
      //return;
    }
    else
    {
      // Display data for Sensor 2
      Serial.println();
      Serial.println("Sensor 2 Data:");
      displayData(data2);

      selectedSensor = 1;
      pmSerial1.listen();
    }
  } 

  
}

void displayData(PM25_AQI_Data &data) {
  Serial.println(F("---------------------------------------"));
  Serial.println(F("Concentration Units (standard)"));
  Serial.println(F("---------------------------------------"));
  Serial.print(F("PM 1.0: ")); Serial.print(data.pm10_standard);
  Serial.print(F("\t\tPM 2.5: ")); Serial.print(data.pm25_standard);
  Serial.print(F("\t\tPM 10: ")); Serial.println(data.pm100_standard);
  Serial.println(F("Concentration Units (environmental)"));
  Serial.println(F("---------------------------------------"));
  Serial.print(F("PM 1.0: ")); Serial.print(data.pm10_env);
  Serial.print(F("\t\tPM 2.5: ")); Serial.print(data.pm25_env);
  Serial.print(F("\t\tPM 10: ")); Serial.println(data.pm100_env);
  Serial.println(F("---------------------------------------"));
  Serial.print(F("Particles > 0.3um / 0.1L air:")); Serial.println(data.particles_03um);
  Serial.print(F("Particles > 0.5um / 0.1L air:")); Serial.println(data.particles_05um);
  Serial.print(F("Particles > 1.0um / 0.1L air:")); Serial.println(data.particles_10um);
  Serial.print(F("Particles > 2.5um / 0.1L air:")); Serial.println(data.particles_25um);
  Serial.print(F("Particles > 5.0um / 0.1L air:")); Serial.println(data.particles_50um);
  Serial.print(F("Particles > 10 um / 0.1L air:")); Serial.println(data.particles_100um);
  Serial.println(F("---------------------------------------"));
}


