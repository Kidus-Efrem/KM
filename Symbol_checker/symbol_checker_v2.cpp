#include <iostream>
#include <cctype> // Header file for isupper, islower, isdigit
using namespace std;

int main() {
    char ch;

    // Input: Read a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check uppercase, lowercase, digit, special character
    if (isupper(ch)) {
        cout << "Uppercase letter." << endl;
    } else if (islower(ch)) {
        cout << "Lowercase letter." << endl;
    } else if (isdigit(ch)) {
        cout << "Digit." << endl;
    } else {
        cout << "Special character." << endl;
    }

    // Check even/odd for digits
    if (isdigit(ch)) {
        int digit = ch - '0';
        if (digit % 2 == 0) {
            cout << "Even digit." << endl;
        } else {
            cout << "Odd digit." << endl;
        }
    }

    // Check vowel or consonant for letters
    if (isalpha(ch)) {
        ch = tolower(ch); // Convert to lowercase for ease of checking vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "Vowel." << endl;
        } else {
            cout << "Consonant." << endl;
        }
    }

    return 0;
}
