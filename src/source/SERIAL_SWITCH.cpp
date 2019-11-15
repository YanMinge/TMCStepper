#include "SERIAL_SWITCH.h"

SSwitch::SSwitch( const uint16_t pin, const uint8_t address) :
  p1(pin),
  addr(address)
  {
    pinMode(pin, OUTPUT);
  }

void SSwitch::active() {
  deactivate_all();
  digitalWrite(p1, addr & 0b01 ? LOW : HIGH);
  delayMicroseconds(50);
}

void SSwitch::deactivate_all() {
  digitalWrite(P0_06, LOW);
  digitalWrite(P0_07, LOW);
  digitalWrite(P0_08, LOW);
  digitalWrite(P0_09, LOW);
}
