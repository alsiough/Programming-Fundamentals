/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 2.11
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // index type double
    double array[10];

    // initilizing
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            array[i] = 15.68 + 3 * i;
        } else {
            array[i] = 15.68 - 3 * i;
        }
    }

    cout << "array v obratnom poryadke:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << fixed << setprecision(2) << array[i] << " ";
    }

    return 0;
}