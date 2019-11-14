#include "SERIAL_SWITCH.h"

SSwitch::SSwitch( const uint16_t pin, const uint8_t address) :
  p1(pin),
  addr(address)
  {
    pinMode(pin, OUTPUT);
  }

void SSwitch::active() {
  deactivate_all();
  delay(1);
  digitalWrite(p1, addr & 0b01 ? HIGH : LOW);
}

void SSwitch::deactivate_all() {
    digitalWrite(P0_06, HIGH);
    digitalWrite(P0_07, HIGH);
    digitalWrite(P0_08, HIGH);
    digitalWrite(P0_09, HIGH);
}
