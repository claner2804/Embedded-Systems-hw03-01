
#include <Arduino.h>
#include "sleep_delay.h"


#define LED_PIN		12

void setup() {
	Serial.begin(115200);

	for (int i = 0; i < 5; i++) {
		digitalWrite(LED_PIN, HIGH);
		delay(500);
		digitalWrite(LED_PIN, LOW);
		delay(500);
	}
}

void loop() {
	Serial.print(F("Enter sleep mode"));
	digitalWrite(LED_PIN, HIGH);
	sleep_delay(7);
	digitalWrite(LED_PIN, LOW);
	Serial.print(F("Exit sleep mode"));
	delay(2000);
}


