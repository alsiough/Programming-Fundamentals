/**
 * Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.4
 */

#include <iostream>
using namespace std;

int main() {

    unsigned short us = 120;
    int i = -4986;
    float f = 234.987775f;
    double d = 3.4e-55;


    unsigned short *us_ptr = &us;
    int *i_ptr = &i;
    float *f_ptr = &f;
    double *d_ptr = &d;


    cout << "us: " << *us_ptr << endl;
    cout << "i: " << *i_ptr << endl;
    cout << "f: " << *f_ptr << endl;
    cout << "d: " << *d_ptr << endl;


    cout << "unsigned short: " << sizeof(us) << " byte" << endl;
    cout << "int: " << sizeof(i) << " byte" << endl;
    cout << "float: " << sizeof(f) << " byte" << endl;
    cout << "double: " << sizeof(d) << " byte" << endl;


    int new_var;
    int *new_var_ptr = &new_var;
    *new_var_ptr = 100;
    cout << "value new peremennoi(hz kak na eng): " << *new_var_ptr << endl;

    return 0;
}
