/*
 * IoT Based Home Automation System
 * NodeMCU (ESP8266) + Blynk + 2-Channel Relay
 *
 * IMPORTANT:
 * Replace the placeholder credentials below with your own.
 * Never upload real Wi-Fi passwords or Blynk tokens to GitHub.
 */

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// Relay pins
const uint8_t RELAY_1_PIN = D1;
const uint8_t RELAY_2_PIN = D2;

// Most relay modules are active LOW.
const uint8_t RELAY_ON  = LOW;
const uint8_t RELAY_OFF = HIGH;

void setRelay(uint8_t pin, bool state)
{
  digitalWrite(pin, state ? RELAY_ON : RELAY_OFF);
}

// Blynk virtual pin V0 controls Relay 1
BLYNK_WRITE(V0)
{
  int value = param.asInt();
  setRelay(RELAY_1_PIN, value);
}

// Blynk virtual pin V1 controls Relay 2
BLYNK_WRITE(V1)
{
  int value = param.asInt();
  setRelay(RELAY_2_PIN, value);
}

void setup()
{
  Serial.begin(9600);
  delay(100);

  pinMode(RELAY_1_PIN, OUTPUT);
  pinMode(RELAY_2_PIN, OUTPUT);

  // Keep appliances OFF when the system starts.
  setRelay(RELAY_1_PIN, false);
  setRelay(RELAY_2_PIN, false);

  Serial.println();
  Serial.println("IoT Home Automation System");
  Serial.println("Connecting to Blynk...");

  Blynk.begin(auth, ssid, pass);

  Serial.println("Blynk connection started.");
}

void loop()
{
  Blynk.run();
}
