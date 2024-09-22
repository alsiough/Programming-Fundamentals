#include <iostream>
#include <vector>

using namespace std;

bool areEqual(int a, int b) {
  int bitSize = sizeof(int) * 8;

  for (int i = 0; i < bitSize; i++) {
    int mask = 1 << i;
    // 1 mask = 00000001 & 10010011 = 00000001
    //          10010011

    int a_bit = a & mask;
    int b_bit = b & mask;

    if (a_bit != b_bit) {
      return false;
    }
  }
  return true;
}

bool isMultipleOf8(int a) {
  // 7 in binary is 00000111, so if a & 7 == 0, then a is a multiple of 8
  // because 8 in binary is 00001000
  // and 00001000 & 00000111 == 00000000
  // so if a & 7 == 0, then a is a multiple of 8
  // 00011000 -> 24
  // 00111000 -> 56
  // 01111000 -> 120
  // 11111000 -> 248
  int mask_binary = 0b00000111; // 7 in binary
  return (a & mask_binary) == 0;
}

void printVector(const std::vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  {
    // Задано два цілих значення А та В. Визначити, чи вони
    // дорівнюють, використовуючи бітове подання чисел.

    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (areEqual(a, b)) {
      std::cout << "The numbers are equal." << std::endl;
    } else {
      std::cout << "The numbers are not equal." << std::endl;
    }
  }

  {
    // Задано ціле значення А. Визначити, чи є значення А
    // кратним 8.

    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;

    if (isMultipleOf8(a)) {
      std::cout << "The number is a multiple of 8." << std::endl;
    } else {
      std::cout << "The number is not a multiple of 8." << std::endl;
    }
  }

  {
    // Завдання:
    // Задано дві послідовності, які складаються з 0 та 1.
    // Скласти специфікацію для моделювання операцій AND, OR, XOR.

    // Специфікація:

    // Вхідні дані:
    // - Дві послідовності бітів (A, B) однакової довжини.

    // Алгоритм:
    // 1. Пройти по кожному елементу послідовностей A і B.
    // 2. Для кожного елемента обчислити результат операції AND, OR, або XOR.
    // 3. Зберегти результат в нову послідовність.

    // Операції:
    // - AND: ri = ai AND bi
    // - OR: ri = ai OR bi
    // - XOR: ri = ai XOR bi

    // Вихідні дані:
    // - Результуюча послідовність R.

    int n = 10;

    std::vector<int> a(n); // [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    std::vector<int> b(n);

    for (int i = 0; i < n; i++) {
      a[i] = rand() % 2;
      b[i] = rand() % 2;
    }

    std::cout << "A  : ";
    printVector(a);
    std::cout << "B  : ";
    printVector(b);

    std::vector<int> r_and(n);
    std::vector<int> r_or(n);
    std::vector<int> r_xor(n);

    for (int i = 0; i < n; i++) {
      r_and[i] = a[i] & b[i];
      r_or[i] = a[i] | b[i];
      r_xor[i] = a[i] ^ b[i];
    }

    std::cout << "AND: ";
    printVector(r_and);
    std::cout << "OR : ";
    printVector(r_or);
    std::cout << "XOR: ";
    printVector(r_xor);
  }

  return 0;
}
