#include "LED.h"

LED::LED(int pinLed){
	pinMode(pinLed, OUTPUT);

	pinoLed = pinLed; 	
}

	void LED::turnOn(){
		digitalWrite(pinoLed, HIGH);
	}
	
	void LED::turnOff(){
		digitalWrite(pinoLed, LOW);
	}
	
	void LED::blink(int time){
		digitalWrite(pinoLed, HIGH);
		delay(time * 1000);
		digitalWrite(pinoLed, LOW);
		delay(time * 1000);
	}