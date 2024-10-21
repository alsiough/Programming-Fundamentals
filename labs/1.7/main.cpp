/*
* Done by:
 * Student Name: Serhiienko Oleksandr
 * Student Group: 121
 * Lab 1.77
* I don't understand what files are in the repository now, as they are not related to labs,
* so I just wont touch them and i'll do all tasks in main.cpp
UPD: I realized what it iss, but unfortunatly after Ive done it all
 */
#include <iostream>


static int globalStaticVar = 100;

int main() {

    static int localStaticVar = 50;
    int* dynamicVarMain = new int(10);

    std::cout << "static var(global): " << globalStaticVar << std::endl;
    std::cout << "static var (main): " << localStaticVar << std::endl;
    std::cout << "dynamic var in main: " << *dynamicVarMain << std::endl;


    {
        int* innerDynamicVar1 = new int(20);
        static int innerStaticVar1 = 30;
        std::cout << "dynamic var in block1: " << *innerDynamicVar1 << std::endl;
        std::cout << "static var in block 1: " << innerStaticVar1 << std::endl;
        delete innerDynamicVar1;
    }


    {
        int x = 100;
        std::cout << "x in block 2 = " << x << std::endl;

        {
            int x = 200;
            std::cout << "x in interal block = " << x << std::endl;
        }

        std::cout << "x after interal block = " << x << std::endl;
    }


    int var = 5;
    std::cout << "local var = " << var << std::endl;
    std::cout << "global var by ::var = " << ::globalStaticVar << std::endl;


    for (int i = 0; i < 5; i++) {
        static int iA = 0;
        int iB = 0;
        iA += 1;
        iB += 1;
        std::cout << "iA (static) = " << iA << ", iB (auto) = " << iB << std::endl;
    }


    int* heapVar1 = new int(100);
    std::cout << "heapVar1  = " << *heapVar1 << std::endl;
    delete heapVar1;

    int* heapVar2 = new int(200);
    std::cout << "heapVar2  = " << *heapVar2 << std::endl;



    delete dynamicVarMain;

    return 0;
}
