#include <iostream>
#include <cctype> // Header file for isupper, islower, isdigit
using namespace std;

int main() {
    char inputChar;

    // Input: Read a character from the user
    cout << "Enter a character: ";
    cin >> inputChar;

    // Check if the character is uppercase
    if (isupper(inputChar)) {
        cout << "The character is in uppercase." << endl;
    }
    // Check if the character is lowercase
    else if (islower(inputChar)) {
        cout << "The character is in lowercase." << endl;
    }
    // Check if the character is a digit
    else if (isdigit(inputChar)) {
        cout << "The character is a digit." << endl;
    }
    // If the character is not uppercase, lowercase, or digit, consider it a special character
    else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
