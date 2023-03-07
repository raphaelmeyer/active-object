#include "ascii.h"

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
  case Color::None:
    os << "\033[m";
    break;
  }
  return os;
}
