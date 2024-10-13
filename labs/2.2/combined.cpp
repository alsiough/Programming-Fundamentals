#include <iostream>
using namespace std;

// Enum для типу фігури
enum ShapeType {
    Circle,
    Rectangle
};

// Структура для опису фігури
struct Shape {
    ShapeType type;
    double radius; // Для кола
    double length, width; // Для прямокутника

    // Метод для обчислення площі фігури
    double area() const {
        if (type == Circle) {
            return 3.14159 * radius * radius;
        } else if (type == Rectangle) {
            return length * width;
        }
        return 0.0; // Невідомий тип фігури
    }
};

int main() {
    // Створюємо коло
    Shape circle;
    circle.type = Circle;
    circle.radius = 4.0;

    // Створюємо прямокутник
    Shape rect;
    rect.type = Rectangle;
    rect.length = 5.0;
    rect.width = 3.0;

    cout << "Circle area: " << circle.area() << endl;
    cout << "Rectangle area: " << rect.area() << endl;

    return 0;
}
