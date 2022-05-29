#include <iostream>

void testEnum() {
  enum class Color {
    red = 1,
    green,
    blue
  };

  Color c = Color::red;
//   std::cout << c << std::endl;
}