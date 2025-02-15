#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else if (isdigit(ch)) {
            ++digits;
        } else if (!isspace(ch)) {
            ++specials;
        }
    }

    cout << "Frequency of vowels: " << vowels << endl;
    cout << "Frequency of consonants: " << consonants << endl;
    cout << "Frequency of digits: " << digits << endl;
    cout << "Frequency of special characters: " << specials << endl;

    return 0;
}
