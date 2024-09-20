/**
* Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {

 // описание переменных
 int N = 5; // Номер варианта
 int op1, op2;

 // поразрядное отрицание
 op1 = 18 * N;
 std::cout << "1 ~" << op1 << " = " << ~op1 << std::endl;

 // поразрядное И
 op1 = 89 * N;
 op2 = 122 * N;
 std::cout << "2 and " << op1 << " & " << op2 << " = " << (op1 & op2) << std::endl;

 // Порозрядное ИЛИ
 op1 = 134 * N;
 op2 = 65 * N;
 std::cout << "3 or" << op1 << " | " << op2 << " = " << (op1 | op2) << std::endl;

 // Порозрядное ИЛИ с исключением
 op1 = 34 * N;
 op2 = 78 * N;
 std::cout << "4 or exception " << op1 << " ^ " << op2 << " = " << (op1 ^ op2) << std::endl;

 // Порозрядный сдвиг влево
 op1 = 907 * N;
 op2 = N + 1;
 std::cout << "5 left " << op1 << " << " << op2 << " = " << (op1 << op2) << std::endl;

 // Порозрядный сдвиг вправо
 op1 = -95 * N;
 op2 = N + 1;
 std::cout << "6 right " << op1 << " >> " << op2 << " = " << (op1 >> op2) << std::endl;

 return 0;

}



