#include "counter.h"

#include <chrono>
#include <iostream>
#include <thread>

int Counter::up(int amount, Color color) {
  std::cout << color << "Counting ...";
  for (int i = 0; i < amount; ++i) {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    ++value_;
    std::cout << " " << value_ << std::flush;
  }
  std::cout << Color::None << "\n";

  return value_;
}

int Counter::down(int amount, Color color) {
  std::cout << color << "Counting ...";
  for (int i = 0; i < amount; ++i) {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    --value_;
    std::cout << " " << value_ << std::flush;
  }
  std::cout << Color::None << "\n";

  return value_;
}
