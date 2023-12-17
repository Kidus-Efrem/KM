#include <iostream>
using namespace std;

int main() {
    // Loop through the numbers from 10 to 49
    for (int i = 10; i <= 49; ++i) {
        // Print the current number
        cout << i;

        // Check if the current number is not the last in its row
        if (i % 10 != 9 && i != 49) {
            cout << " ";
        } else {
            // Move to the next line after printing 10 numbers in a row
            cout << endl;
        }
    }

    return 0;
}
