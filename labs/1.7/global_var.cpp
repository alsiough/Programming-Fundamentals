// Global Variable Example: Game High Score System

#include <iostream>

int highScore = 0;  // Global variable to store the high score

void updateScore(int newScore) {
    if (newScore > highScore) {
        highScore = newScore;  // Update high score if new score is higher
    }
}

void displayHighScore() {
    std::cout << "Current High Score: " << highScore << std::endl;
}

int main() {
    updateScore(100);  // Set new high score
    displayHighScore(); // Output: Current High Score: 100
    updateScore(200);  // Set new high score
    displayHighScore(); // Output: Current High Score: 200
    return 0;
}