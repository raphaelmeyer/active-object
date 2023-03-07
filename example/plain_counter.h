#pragma once

#include "counter.h"

class PlainCounter : public Counter {
public:
  int up(int amount, Color color) override;
  int down(int amount, Color color) override;

  int value() const override { return value_; }

private:
  int value_{0};
};
