/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 2.22
 */
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    float grade;
    int course;
};

//oпис перелічуваного типу для курсів(chatgpt tells how to use enem)
enum Course { First = 1, Second, Third, Fourth, Fifth };

int main() {
    //oпис масиву
    Student students[7];

    // ініціалізація змінних
    string names[7] = {"John Pork", "Quandale Dingle", "Walter White", "Serega Pirat", "Lena Golovach", "Tony Soprano", "Dexter Morgan"};
    float grades[7] = {4.5, 3.2, 4.9, 5.0, 3.8, 4.1, 4.0};
    int courses[7] = {Second, Fifth, Second, Second, Third, Second, Fifth};

    // ініціалізація массиву
    for (int i = 0; i < 7; ++i) {
        students[i].name = names[i];
        students[i].grade = grades[i];
        students[i].course = courses[i];
    }

    // % відмінників на 2 курсі
    int countExcellent = 0;
    int totalSecondCourse = 0;

    for (int i = 0; i < 7; ++i) {
        if (students[i].course == Second) {
            totalSecondCourse++;
            if (students[i].grade >= 4.5) {
                countExcellent++;
            }
        }
    }


    if (totalSecondCourse > 0) {
        float percentage = (float(countExcellent) / totalSecondCourse) * 100;
        cout << "percentage of 2nd grade students: " << percentage << "%" << endl;
    } else {
        cout << "there is noone on 2nd grade" << endl;
    }

    return 0;
}
