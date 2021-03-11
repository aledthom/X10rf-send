/*
 * Library to send basic X10 commands via 
 *  an rf transmitter (433MHz etc.)
 */

#include "X10sendrf.h"
#include "Arduino.h"

X10sendrf::X10sendrf(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void X10sendrf::send(char housecode, int unitcode,bool on)
{
  char buf[64];
  sprintf(buf, "X10 send: %c%d %s\n", housecode, unitcode, on? "on":"off");
  Serial.print(buf);
}
