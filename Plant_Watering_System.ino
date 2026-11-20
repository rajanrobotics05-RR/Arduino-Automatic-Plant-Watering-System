
/*
  Project : Automatic Plant Watering System
  Controller : Arduino Uno
  Sensor     : Soil Moisture Sensor

  Developed by: Rajan Robotics
  Vision to Reality
*/

#define SOIL_SENSOR A0

// Calibrate these values using your sensor
int DRY_VALUE = 800;
int WET_VALUE = 300;

int moistureValue;
int moisturePercent;

void setup() {
  Serial.begin(9600);

  pinMode(SOIL_SENSOR, INPUT);

  Serial.println("RAJAN ROBOTICS");
  Serial.println("Automatic Plant Watering System");
  Serial.println("--------------------------------");
}

void loop() {

  // Read soil moisture sensor
  moistureValue = analogRead(SOIL_SENSOR);

  // Convert sensor reading into percentage
  moisturePercent = map(
    moistureValue,
    DRY_VALUE,
    WET_VALUE,
    0,
    100
  );

  moisturePercent = constrain(moisturePercent, 0, 100);

  Serial.print("Sensor Value: ");
  Serial.print(moistureValue);

  Serial.print(" | Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  // Check soil condition
  if (moisturePercent < 30) {
    Serial.println("Soil Condition: DRY");
    Serial.println("Watering Required!");
  }
  else if (moisturePercent < 70) {
    Serial.println("Soil Condition: MODERATE");
  }
  else {
    Serial.println("Soil Condition: WET");
  }

  Serial.println("--------------------------------");

  delay(1000);
}
