#include "Arduino.h"
class Blink{
  public:
  Blink(int a);
  void on(int d);
  void off(int d); 
};
Blink::Blink(int a){
  pinMode(LED_BUILTIN, OUTPUT);
}
void Blink::on(int d){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(d);
}
void Blink::off(int d){
  digitalWrite(LED_BUILTIN,LOW);
  delay(d);
}

