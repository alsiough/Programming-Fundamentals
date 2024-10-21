/*
* Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.66
 */
#include <iostream>

int main() {

    char var1 = 'U';
    char var2 = 'R';
    char var3 = 'M';


    const char const1 = 0x58;  //'U'
    const char const2 = 0x52;  //'R'
    const char const3 = 0x4D;  //'M'


    char init1 = 'U';
    char init2 = 'R';
    char init3 = 'M';


    std::cout << "variable: " << var1 << ", " << var2 << ", " << var3 << std::endl;
    std::cout << "const: " << const1 << ", " << const2 << ", " << const3 << std::endl;
    std::cout << "initilizing subjects: " << init1 << ", " << init2 << ", " << init3 << std::endl;

    return 0;
}
