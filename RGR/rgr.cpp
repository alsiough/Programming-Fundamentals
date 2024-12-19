#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//входить символ до діапазону??
bool isLetter(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

//перевірка ланцюжка
bool isValidChain(const string& chain) {
    int n = chain.length();

    if (n < 3) return false;

    // перев 1 част
    int i = 0;
    while (i < n && isLetter(chain[i])) {
        i++;
    }

    if (i == 0) return false;

    if (i >= n || chain[i] != '=') return false;
    i++;

    // перев 3 част
    if (i >= n || !isDigit(chain[i])) return false;
    while (i < n && isDigit(chain[i])) {
        i++;
    }

    // якшо все по кайфу
    return i == n;
}

int main() {
    string chain;

    cout << "enter lancuzhok: ";
    cin >> chain;

    if (isValidChain(chain)) {
        cout << "lancuzhok \"" << chain << "\" is lang L(V)." << endl;
    } else {
        cout << "lancuzhok \"" << chain << "\" is NOT lang L(V)." << endl;
    }

    return 0;
}
