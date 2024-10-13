// Static Variable Example: Persistent Counter Inside a Function

#include <iostream>

void visitWebsite() {
    static int visitCount = 0;  // Static local variable
    visitCount++;
    std::cout << "This function has been called " << visitCount << " times." << std::endl;
}

int main() {
    visitWebsite();  // Output: 1 1
    visitWebsite();  // Output: 2 1
    visitWebsite();  // Output: 3 1
    return 0;
}
