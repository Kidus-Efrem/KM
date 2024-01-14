#include <iostream>
#include <cstring>

int main() {
    const int maxLength = 50;
    char firstProgram[maxLength] = "Breaking Bad";
    char secondProgram[maxLength];

    // Initialize second program using strcpy()
    strcpy(secondProgram, "Stranger Things");

    std::cout << "First TV Program: " << firstProgram << std::endl;
    std::cout << "Second TV Program: " << secondProgram << std::endl;

    return 0;
}
