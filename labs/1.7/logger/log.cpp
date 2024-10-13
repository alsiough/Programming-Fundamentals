#include <iostream>
#include <string>
#include "log.h"

static int logLevel = 1;  // Static global variable, file-scoped

void logMessage(std::string message, int level) {
    if (level >= logLevel) {
        std::cout << "Log: " << message << std::endl;
    }
}

void setLogLevel(int level) {
    logLevel = level;
}
