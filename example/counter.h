#pragma once

#include "ascii.h"

class Counter {
public:
  virtual int up(int amount, Color color) = 0;
  virtual int down(int amount, Color color) = 0;

  virtual int value() const = 0;
};
