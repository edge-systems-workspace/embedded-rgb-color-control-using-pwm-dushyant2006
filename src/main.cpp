#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Dushyant
 * @date 2026-02-28
 */
#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11


    void setup() {

        Serial.begin(9600);

        pinMode(RED_PIN, OUTPUT);
        pinMode(GREEN_PIN, OUTPUT);
        pinMode(BLUE_PIN, OUTPUT);

        Serial.println("RGB LED Control Initialized");
    }


void loop() {
}