/*
 * Library to send basic X10 commands via 
 *  an rf transmitter (433MHz etc.)
 */

#ifndef X10sendrf_h
#define X10sendrf_h

#include "Arduino.h"

class X10sendrf
{
  public:
    X10sendrf(int pin);
    void send(char housecode, int unitcode, bool on);
  private:
    int _pin;
};

#endif
