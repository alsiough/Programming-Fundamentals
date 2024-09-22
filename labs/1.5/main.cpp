/**
* Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {

    bool ULO1, ULO2, ULO3, BLO;
    double A, B, C, D;
    int ОВ1, ОВ2;


    ULO1 = true;
    ULO2 = false;
    ULO3 = true;

    A = 5.15;
    B = 5.15;
    C = 10;
    D = 2.12;

    ОВ1 = (A < B);
    ОВ2 = (C <= D);


    BLO = (ULO2 && (A < B)) || (ULO3 && (C <= D));


    cout << "Result: " << BLO << endl;

    return 0;
}
