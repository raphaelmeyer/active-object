#include "counter.h"

#include <chrono>
#include <iostream>
#include <thread>

namespace {

std::ostream &operator<<(std::ostream &os, Color color) {
  switch (color) {
  case Color::Red:
    os << "\033[31m";
    break;
  case Color::Green:
    os << "\033[32m";
    break;
  case Color::Yellow:
    os << "\033[33m";
    break;
  case Color::Blue:
    os << "\033[34m";
    break;
  case Color::Magenta:
    os << "\033[35m";
    break;
  case Color::Cyan:
    os << "\033[36m";
    break;
  }
  return os;
}

auto const reset = "\033[m";

} // namespace

void Counter::upto(int to, Color color) {
  std::cout << color << "Counting ...";
  for (int i = 1; i <= to; ++i) {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << " " << i << std::flush;
  }
  std::cout << reset << "\n";
}

void Counter::downfrom(int from, Color color) {
  std::cout << color << "Counting ...";
  for (int i = from; i >= 1; --i) {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << " " << i << std::flush;
  }
  std::cout << reset << "\n";
}
