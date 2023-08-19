/*
 Name:		water_pump_nano.ino
 Created:	8/19/2023 3:19:47 PM
 Author:	amird
 מתקן השקיה לעציצים ללא חיבור אינטרנט
*/

#define pinGreenPotz_frequency	A3
#define pinBluePotz_duration	A4
#define pinSoilSensor			A1
#define pinBtn					5
#define pinPump					9

int water_tim_sec = 10;
unsigned long lastWaterTime;
int timeBetweenPumps_sec = 10 * 60;
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(pinGreenPotz_frequency, INPUT);
	pinMode(pinBluePotz_duration, INPUT);
	pinMode(pinSoilSensor, INPUT);
	pinMode(pinBtn, INPUT_PULLUP);
	pinMode(pinPump, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	water_tim_sec = 10 * map(analogRead(pinBluePotz_duration), 0, 1023, 1, 4);
}
