#pragma once

#include <Arduino.h>
#include "TMC_platforms.h"

class SSwitch {
  public:
    SSwitch(const uint16_t pin1, const uint8_t address);
    void active();
	void deactivate_all();
  private:
    const uint16_t p1;
    const uint8_t addr;
};
