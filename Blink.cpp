#include "Arduino.h"
#include "Blink.h"
void setup(){
  blinkInit();
}
void loop(){
  LEDon();
  delay(1000);
  LEDoff();
  delay(1000);
}

