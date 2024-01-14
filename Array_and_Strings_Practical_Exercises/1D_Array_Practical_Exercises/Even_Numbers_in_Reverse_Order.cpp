#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int input;
    cout << "Enter a list of numbers (non-positive to stop):\n";
    while (true) {
        cin >> input;
        if (input <= 0) break;
        numbers.push_back(input);
    }
    cout << "Even numbers in reverse order:\n";
    for (int i = numbers.size() - 1; i >= 0; --i)
        if (numbers[i] % 2 == 0) cout << numbers[i] << " ";
    cout << "\n";
    return 0;
}
