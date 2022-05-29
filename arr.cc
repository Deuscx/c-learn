#include "arr.h"
#include "array"
#include "utils.h"
#include <array>


void ArrayTest::test() {
  int example[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int *ptr = example;

  // 数组其实是指针，下面两个相同
  example[2] = 3;
  *(ptr + 2) = 4;

  for (int i; i < 10; i++) {
    std::cout << example[i] << std::endl;
  }

  std::array<int, 10> another;
  another.fill(1);
  for(int i : another) {
    std::cout << i << std::endl;
  }
}