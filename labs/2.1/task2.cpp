/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 2.1
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<char> arr1(10);
    vector<char> arr2(10);
    vector<char> arr3(10);

    // Заповнення arr1 за формулою 117 + i
    for (int i = 0; i < 10; ++i) {
        arr1[i] = 117 + i;
    }

    // Заповнення arr2 за формулою 127 - 2 * i
    for (int i = 0; i < 10; ++i) {
        arr2[i] = 127 - 2 * i;
    }

    arr3 = arr1;

    // Знаходимо два мінімальних елементи в arr3
    int min1 = min(arr3[0], arr3[1]);
    int min2 = max(arr3[0], arr3[1]);
    for (int i = 2; i < 10; ++i) {
        if (arr3[i] < min1) {
            min2 = min1;
            min1 = arr3[i];
        } else if (arr3[i] < min2) {
            min2 = arr3[i];
        }
    }
    // Виводимо суму двох мінімальних елементів
    cout << "sum of 2 min elements: " << min1 + min2 << endl;

    return 0;
}