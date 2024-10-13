#include <iostream>
using namespace std;

// Enum для визначення днів тижня
enum DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void printDay(DayOfWeek day) {
    switch (day) {
        case Monday:
            cout << "It's Monday, let's start the week!" << endl;
            break;
        case Tuesday:
            cout << "It's Tuesday, keep going!" << endl;
            break;
        case Wednesday:
            cout << "It's Wednesday, halfway through!" << endl;
            break;
        case Thursday:
            cout << "It's Thursday, almost there!" << endl;
            break;
        case Friday:
            cout << "It's Friday, weekend is near!" << endl;
            break;
        case Saturday:
        case Sunday:
            cout << "It's weekend, time to relax!" << endl;
            break;
    }
}

int main() {
    DayOfWeek today = Friday;
    printDay(today);
    return 0;
}
