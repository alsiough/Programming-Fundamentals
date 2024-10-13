// Static Local Variable Example: Random Number Generator Seed

#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    static bool initialized = false;  // Static variable to track initialization
    if (!initialized) {
        srand(time(0));  // Seed the random number generator only once
        initialized = true;
    }
    return rand() % 100;  // Generate a random number between 0 and 99
}

int main() {
    std::cout << "Random Number: " << getRandomNumber() << std::endl;
    std::cout << "Random Number: " << getRandomNumber() << std::endl;
    return 0;
}
