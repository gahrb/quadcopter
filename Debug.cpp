/*
Debugging routine for MultiWii Copter
by Bernhard Gahr
*/
#include "Arduino.h"
#include "config.h"
#include "def.h"
#include "types.h"
#include "MultiWii.h"
#include "Alarms.h"


void initDebug() {
  Serial.begin(9600);
  while(!Serial); // Waits until Serial becomes available.
  Serial.println("Debugging Started...");
  while(true){
    if (Serial.available() > 0)
      {
        int ByteReceived = Serial.read();      
        if(ByteReceived == '1') // Single Quote! This is a character.
        {
          Serial.println("Starting Initialization...");
          break;
        }else{
          Serial.println("Waiting for you to insert a 1");
        }
      
      // END Serial Available
    }
  }
}

void debug_err(const char* m){
	Serial.println("Error: ");
	Serial.println(m);
}

void debug_notif( const char* m){
	Serial.println("Warning: ");
	Serial.println(m);
}
