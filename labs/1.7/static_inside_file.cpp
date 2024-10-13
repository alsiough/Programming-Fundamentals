// Static Global Variable Example: Logging System with File-Level Scope

#include <iostream>
#include <string>

bool is_production = false;

static int logLevel = 1;  // Static global variable, file-scoped

void logMessage(std::string message, int level) {
    if (level >= logLevel) {
        std::cout << "Log: " << message << std::endl;
    }
}

void setLogLevel(int level) {
    logLevel = level;
}

int main() {
    if (is_production) {
        setLogLevel(4);  // Set log level to 2
    } else {
        setLogLevel(1);
    }

    logMessage("This is a Debug message", 1);  // Won't print, as level 1 is below logLevel
    logMessage("This is an Information message", 2);  // Will print, as level 2 is equal to logLevel
    logMessage("This is a Warning message", 3);  // Will print, as level 3 is above logLevel
    logMessage("This is an Error message", 4);  // Will print, as level 4 is above logLevel
    return 0;
}