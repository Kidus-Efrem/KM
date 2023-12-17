#include <iostream>
using namespace std;

int main() {
    double mark;

    // Input: Read the mark from the user
    cout << "Enter the mark: ";
    cin >> mark;

    // Convert mark to letter grade based on the specified scale
    if (mark >= 90) {
        cout << "Letter Grade: A+" << endl;
    } else if (mark >= 80) {
        cout << "Letter Grade: A" << endl;
    }else if (mark >= 75) {
        cout << "Letter Grade: B+" << endl;
    }
    else if (mark >= 60) {
        cout << "Letter Grade: B" << endl;
    } else if (mark >= 55) {
        cout << "Letter Grade: C+" << endl;
    } else if (mark >= 45) {
        cout << "Letter Grade: C" << endl;
    }else if (mark >= 30) {
        cout << "Letter Grade: D" << endl;
    } else {
        cout << "Letter Grade: F" << endl;
    }

    return 0;
}
