#include "utils.h"
#include "arr.h"
int main() {
  Log log;
  log.setLevel(LogLevel::LOG_DEBUG);
  log.debug("Hello");
  log.warn("World");

  ArrayTest::test();
}