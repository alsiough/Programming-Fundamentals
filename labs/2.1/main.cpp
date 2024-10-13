#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function for bubble sort with the ability to choose the sorting direction
void bubbleSort(int arr[], int n, bool ascending = true) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If ascending mode, sort in ascending order
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            // If descending mode, sort in descending order
            else {
                if (arr[j] < arr[j + 1]) {
                    // Change places if elements are not in the correct order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n = 10;
    int arr[10]; //0, 1, 2, 3
    int arr2[4] = {3, 5, 8, 9};

    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
        arr[i] = rand() % 100;
    }
    cout << ' ' << endl;

    cout << "Initial array: ";
    printArray(arr, n);

    // Sorting in ascending order
    cout << "Sorting in ascending order: ";
    bubbleSort(arr, n); // true - ascending
    printArray(arr, n);

    // Sorting in descending order
    cout << "Sorting in descending order: ";
    bubbleSort(arr, n, false); // false - descending
    printArray(arr, n);

    return 0;
}


