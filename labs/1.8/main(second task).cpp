/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 1.8
 */
#include <iostream>
#include <bitset>

using namespace std;

// add 2 ints
int add(int a, int b) {
    return a + b;
}


bool equal(int a, int b) {
    return a == b;
}

int main() {
    // value of variant 12
    int operand1 = 141;
    int operand2 = 115;


    cout << "+: " << endl;
    int sum = add(operand1, operand2);
    cout << "first operand: " << operand1 << " (" << bitset<32>(operand1) << ")" << endl;
    cout << "second operand: " << operand2 << " (" << bitset<32>(operand2) << ")" << endl;
    cout << "result: " << sum << " (" << bitset<32>(sum) << ")" << endl;


    cout << "=: " << endl;
    bool result = equal(operand1, operand2);
    cout << "first operand: " << operand1 << " (" << bitset<32>(operand1) << ")" << endl;
    cout << "second operand: " << operand2 << " (" << bitset<32>(operand2) << ")" << endl;
    cout << "result: " << result << endl;

    return 0;
}