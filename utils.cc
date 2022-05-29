#include "utils.h"

void Log::setLevel(LogLevel level) { this->level = level; }

void Log::debug(const char *msg) {
  if (level >= LogLevel::LOG_DEBUG) {
    std::cout << "DEBUG: " << msg << std::endl;
  }
}

void Log::info(const char *msg) {
  if (level >= LogLevel::LOG_INFO) {
    std::cout << "INFO: " << msg << std::endl;
  }
}

void Log::warn(const char *msg) {
  if (level >= LogLevel::LOG_WARN) {
    std::cout << "WARN: " << msg << std::endl;
  }
}
