/**
 * Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.55
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const int A = 17;
    const int B = -23;
    const int C = 33;
    const int D = 2;
    const int E = 26054;
    const double F = sizeof(double);


    int R = (A ^ B) * (C >> D) * (~E);


    double L = (R == F) ? R : F;


    cout << "R = " << R << endl;
    cout << "L = " << L << endl;

    return 0;
}

