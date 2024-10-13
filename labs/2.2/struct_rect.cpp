#include <iostream>
using namespace std;

// Структура для опису прямокутника
struct Rectangle {
    double length;
    double width;

    // Метод для обчислення площі
    double area() const {
        return length * width;
    }

    // Метод для обчислення периметра
    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect1;
    rect1.length = 5.5;
    rect1.width = 3.5;

    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;
    cout << "Length: " << rect1.length << endl;
    cout << "Width: " << rect1.width << endl;
    return 0;
}
