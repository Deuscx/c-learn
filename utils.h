#include <iostream>

enum class LogLevel {
  LOG_TRACE,
  LOG_DEBUG,
  LOG_INFO,
  LOG_WARN,
  LOG_ERROR,
  LOG_FATAL
};

class Log {
private:
  LogLevel level;

public:
  void setLevel(LogLevel level);
  void debug(const char *msg);
  void info(const char *msg);
  void warn(const char *msg);
};