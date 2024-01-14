#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);

    // Output in uppercase
    std::cout << "Uppercase: ";
    for (char ch : input) {
        std::cout << static_cast<char>(toupper(ch));
    }
    std::cout << std::endl;

    // Output in lowercase
    std::cout << "Lowercase: ";
    for (char ch : input) {
        std::cout << static_cast<char>(tolower(ch));
    }
    std::cout << std::endl;

    return 0;
}
