#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author UTTAM_SINGH
 * @date 2025-02-21
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */
const int fsrPin = A0;
int fsrValue = 0;
int threshold = 800;

void setup() {
    Serial.begin(9600);
    while (!Serial);
    analogReadResolution(12);
    Serial.println("SR Force Measurement System (UNO R4 WiFi)");
}