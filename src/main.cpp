#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Dushyant
 * @date 2026-02-28
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

// RGB Pin Definitions
#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

/**
 * @brief Initializes serial communication and configures RGB pins.
 */
void setup() {

    // Initialize Serial communication
    Serial.begin(9600);

    // Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // Print initialization message
    Serial.println("RGB LED Control Initialized");
}

/**
 * @brief Controls RGB LED using digital and PWM modes.
 */
void loop() {

    // -------- DIGITAL MODE --------

    // Turn ON red
    digitalWrite(RED_PIN, HIGH);
    delay(1000);

    // Turn OFF red
    digitalWrite(RED_PIN, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    // RED brightness (0–255)
    analogWrite(RED_PIN, 255);   // Full brightness
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(1000);

    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255); // Green full
    analogWrite(BLUE_PIN, 0);
    delay(1000);

    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255);  // Blue full
    delay(1000);

    // White color (Mix)
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, 255);
    delay(1000);

    // Turn OFF all
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);

    // Visible transition delay
    delay(1000);
}