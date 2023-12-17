#include <iostream>
using namespace std;

int main() {
    int start, end;

    // Input: Enter the start and end values
    cout << "Enter the start value: ";
    cin >> start;

    cout << "Enter the end value: ";
    cin >> end;

    // Output: Print numbers from start to end in the specified manner
    for (int i = start; i <= end; ++i) {
        if (i % 10 != 0 && i != end) {
            cout << i << " ";
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
