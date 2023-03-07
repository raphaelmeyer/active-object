#include "counter.h"

#include <iostream>
#include <thread>

int main() {

  Counter counter{};

  std::thread worker1{[&counter] {
    counter.up(23, Color::Red);
    counter.down(11, Color::Green);
    counter.up(13, Color::Yellow);
    counter.down(21, Color::Red);
  }};
  std::thread worker2{[&counter] {
    counter.up(42, Color::Blue);
    counter.down(17, Color::Magenta);
    counter.down(13, Color::Cyan);
    counter.down(12, Color::Blue);
  }};

  worker1.join();
  worker2.join();

  std::cout << "Final: " << counter.value() << "\n";
}
