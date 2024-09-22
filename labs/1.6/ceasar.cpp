#include <iostream>
#include <string>

std::string caesarEncrypt(const std::string& text, int shift) {
    std::string result = "";

    // Loop through each character in the input text
    for (char c : text) {
        // Check if the character is uppercase
        if (isupper(c)) {
            result += char((c + shift - 65) % 26 + 65);
        }
        // Check if the character is lowercase
        else if (islower(c)) {
            result += char((c + shift - 97) % 26 + 97);
        }
        // If it's neither, just add the character as is
        else {
            result += c;
        }
    }

    return result;
}

int main() {
    // Just test what happens if we add shift to the 'A' and 'a'
    int shift_test = 1;
    std::cout << "Shifted 'A' without cast: " << 'A' + char(shift_test) << std::endl;
    std::cout << "Shifted 'A' without cast: " << 'A' + shift_test << std::endl;
    std::cout << "Shifted 'A' with cast   : " << char('A' + shift_test) << std::endl;
    std::cout << "Shifted 'a' with cast   : " << char('a' + shift_test) << std::endl;

    // Get the text and shift from the user
    std::string text;
    int shift;

    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, text);

    std::cout << "Enter the shift value: ";
    std::cin >> shift;

    std::string encryptedText = caesarEncrypt(text, shift);
    std::cout << "Encrypted Text: " << encryptedText << std::endl;

    return 0;
}