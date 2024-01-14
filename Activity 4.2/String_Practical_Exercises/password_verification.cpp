#include <iostream>
#include <cstring>

int main() {
    const int maxLength = 20;
    char password[maxLength] = "securePassword";
    char userInput[maxLength];

    std::cout << "Enter the password: ";
    std::cin.getline(userInput, maxLength);

    if (strcmp(userInput, password) == 0) {
        std::cout << "Correct password. Access granted." << std::endl;
    } else {
        std::cout << "Incorrect password. Access denied." << std::endl;
    }

    return 0;
}
