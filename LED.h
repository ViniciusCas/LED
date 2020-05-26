
#ifndef LED_H
#DEFINE LED_H
#include <Arduino.h>

class LED{
	private: int pinoLed;
	
	public: LED(int pinLed);
	
	void on();
	void off();
	void blink(int time);
	
}

#endif