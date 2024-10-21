/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 2.11
 */
#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "choose arrays: \n";
    cout << "1. array 5x4\n";
    cout << "2. array 5x5\n";
    cout << "your choice: ";
    cin >> choice;

    if (choice == 1) {
        const int rows = 5;  //ryadki
        const int cols = 4;  //stovpci

        //5x4
        int matrix[rows][cols] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16},
            {17, 18, 19, 20}
        };

        // new array for pobichna diagonal'
        int diagonal[rows];

        for (int i = 0; i < rows; ++i) {
            diagonal[i] = matrix[i][cols - i - 1]; //thx to openai
        }

        cout << "pobichna diagonal array 5x4: ";
        for (int i = 0; i < rows; ++i) {
            cout << diagonal[i] << " ";
        }
        cout << endl;

    } else if (choice == 2) {
        const int size = 5;  //ryadki and stolbci

        //5x5
        int matrix[size][size] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20},
            {21, 22, 23, 24, 25}
        };

        //new array for pobichna diagonal'
        int diagonal[size];

        for (int i = 0; i < size; ++i) {
            diagonal[i] = matrix[i][size - i - 1]; //thx to openai
        }

        cout << "pobichna diagonal array 5x5: ";
        for (int i = 0; i < size; ++i) {
            cout << diagonal[i] << " ";
        }
        cout << endl;
    } else {
        cout << "IQ test has been failed!\n Try harder next time!" << endl;
    }

    return 0;
}
