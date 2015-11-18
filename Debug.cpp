/*
Debugging routine for MultiWii Copter
by Bernhard Gahr
*/
#include <avr/io.h>

#include "Arduino.h"
#include "config.h"
#include "def.h"
#include "types.h"
#include "MultiWii.h"
#include "Alarms.h"
#include "EEPROM.h"
#include "IMU.h"
#include "LCD.h"
#include "Output.h"
#include "RX.h"
#include "Sensors.h"
#include "Serial.h"
#include "GPS.h"
#include "Protocol.h"

#include <avr/pgmspace.h>


void initDebug(){
	Serial.begin(9600);
	while(!Serial); // Waits until Serial becomes available.
}

void debug_err(string m){
	Serial.println("Error: ");
	Serial.println(m);
}

void debug_not(string m){
	Serial.println("Warning: ");
	Serial.println(m);
}
