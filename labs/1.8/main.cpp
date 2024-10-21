/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 1.88
 */
#include <iostream>
using namespace std;

int main() {
    //if-else
    int a;
    cout << "enter value a: ";
    cin >> a;

    if (a > 0) {
        cout << "+\n";
    } else if (a < 0) {
        cout << "-\n";
    } else {
        cout << "=0\n";
    }

    //switch
    int day;
    cout << "enter value of day (1-monday, 7-sunday): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "monday\n";
        break;
        case 2:
            cout << "tuesday\n";
        break;
        case 3:
            cout << "wednsday\n";
        break;
        case 4:
            cout << "thursday\n";
        break;
        case 5:
            cout << "friday\n";
        break;
        case 6:
            cout << "saturday\n";
        break;
        case 7:
            cout << "sunday\n";
        break;
        default:
            cout << "in week only 7 days, you are failed iq test\n";
        break;
    }


    cout << "\nfor: from 1 to 5\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;


    cout << "\nwhile: from 5 to 1\n";
    int counter = 5;
    while (counter > 0) {
        cout << counter << " ";
        counter--;
    }
    cout << endl;


    cout << "\ndo-while from 1 to 5\n";
    counter = 1;
    do {
        cout << counter << " ";
        counter++;
    } while (counter <= 5);
    cout << endl;

    return 0;
}
