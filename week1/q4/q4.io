#include <Arduino.h>

const int LED_PIN = 13;
const int POT_PIN = A0;

int blinkCount = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT_PIN);

  // Map potentiometer reading to delay (100–1000 ms)
  int blinkDelay = map(potValue, 0, 1023, 100, 1000);

  digitalWrite(LED_PIN, HIGH);
  delay(blinkDelay);

  digitalWrite(LED_PIN, LOW);
  delay(blinkDelay);

  blinkCount++;

  Serial.print("Blink count: ");
  Serial.print(blinkCount);
  Serial.print(" | Delay: ");
  Serial.print(blinkDelay);
  Serial.println(" ms");
}
