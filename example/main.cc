#include "counter.h"

#include <thread>

int main() {

  Counter counter{};

  std::thread worker1{[&counter] {
    counter.upto(11, Color::Red);
    counter.downfrom(11, Color::Green);
    counter.upto(23, Color::Yellow);
    counter.downfrom(23, Color::Red);
  }};
  std::thread worker2{[&counter] {
    counter.downfrom(30, Color::Blue);
    counter.upto(17, Color::Magenta);
    counter.downfrom(17, Color::Cyan);
    counter.upto(30, Color::Blue);
  }};

  worker1.join();
  worker2.join();
}
