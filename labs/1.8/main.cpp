#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int el : numbers) {
        // numbers[i]
        // if (el % 2 == 0) {
        //     std::cout << el << " is even" << std::endl;
        // } else {
        //     std::cout << el << " is odd" << std::endl;
        // }
    }
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    {
        int   a = 66;
        float b = 12.9;
        int   c = 62;
        int   d = 59;

     
        //  empty (! (A != B) && (< (C < D)))
        bool res = (!(a != b) &&  (  <(c < d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 0;

        bool res = !a;
        cout << "res: " << boolalpha << res << endl;
    }

    return 0;


}