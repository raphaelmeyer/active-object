#pragma once

#include "counter.h"

class AoCounter : public Counter {
public:
  int up(int amount, Color color) override;
  int down(int amount, Color color) override;

  int value() const override;
};
