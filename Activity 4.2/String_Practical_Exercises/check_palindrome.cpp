#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(const string& word) {
    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        if (tolower(word[start]) != tolower(word[end])) {
            return false;
        }
        ++start;
        --end;
    }

    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    cout << (isPalindrome(word) ? "Palindrome" : "Not a Palindrome") << endl;

    return 0;
}
