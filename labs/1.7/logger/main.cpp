#include "log.h"

int main() {
    setLogLevel(3);  // Set log level to 2 (Information and above)

    logMessage("This is a Debug message", 1);  // Won't print
    logMessage("This is an Information message", 2);  // Will print
    logMessage("This is a Warning message", 3);  // Will print
    logMessage("This is an Error message", 4);  // Will print

    return 0;
}

// Steps to compile and run:
// g++ -c main.cpp   # Compiles main.cpp to main.o
// g++ -c log.cpp    # Compiles log.cpp to log.o
// g++ main.o log.o -o logger  # Links main.o and log.o to create the executable
// ./logger  # Runs the executable
