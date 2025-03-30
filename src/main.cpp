#include <Arduino.h>

#define FLOW_SENSOR_PIN 16  // You can change this to any safe GPIO

volatile int pulseCount = 0;

void countPulses() {
  pulseCount++;
}

void setup() {
  Serial.begin(921600);
  pinMode(FLOW_SENSOR_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(FLOW_SENSOR_PIN), countPulses, RISING);

  Serial.println("ESP32 Water Flow Sensor Calibration");
  Serial.println("Start water flow and measure a known volume (e.g., 1 liter).");
  Serial.println("When finished, check the pulse count in the Serial Monitor.");
}

void loop() {
  Serial.print("Pulse Count: ");
  Serial.println(pulseCount);
  delay(1000);
}
