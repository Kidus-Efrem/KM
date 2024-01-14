#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);

    istringstream iss(line);
    string token;

    cout << "Tokens: ";
    while (iss >> token) {
        cout << token << " ";
    }

    cout << endl;

    return 0;
}
