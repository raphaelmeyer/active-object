#pragma once

#include "ascii.h"

class Counter {
public:
  int up(int amount, Color color);
  int down(int amount, Color color);

  int value() const { return value_; }

private:
  int value_{0};
};
