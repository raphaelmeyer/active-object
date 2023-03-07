#pragma once

enum class Color { Red, Green, Yellow, Blue, Magenta, Cyan };

class Counter {
public:
  void upto(int to, Color color);
  void downfrom(int from, Color color);
};
