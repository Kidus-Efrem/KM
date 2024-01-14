#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    map<char, int> charFrequency;

    for (char ch : input) {
        if (isalpha(ch)) {
            charFrequency[tolower(ch)]++;
        }
    }

    char maxChar = ' ';
    int maxFreq = 0;

    char minChar = ' ';
    int minFreq = input.length() + 1;

    for (const auto& pair : charFrequency) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxChar = pair.first;
        }

        if (pair.second < minFreq) {
            minFreq = pair.second;
            minChar = pair.first;
        }
    }

    cout << "Character with largest frequency: " << maxChar << " (" << maxFreq << " times)\n";
    cout << "Character with smallest frequency: " << minChar << " (" << minFreq << " times)\n";

    return 0;
}
