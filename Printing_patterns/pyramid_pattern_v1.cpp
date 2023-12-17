#include <iostream>
using namespace std;

int main() {
    int choice, rows;

    // Input: Choose the pattern
    cout << "Choose the pattern:" << endl;
    cout << "1. Half Pyramid\n2. Inverted Half Pyramid\n3. Hollow Inverted Half Pyramid\n";
    cout << "4. Full Pyramid\n5. Inverted Full Pyramid\n6. Hollow Full Pyramid\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    // Input: Number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Output: Print the selected pattern
    switch (choice) {
        case 1:
            // Half Pyramid
            for (int i = 1; i <= rows; ++i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 2:
            // Inverted Half Pyramid
            for (int i = rows; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 3:
            // Hollow Inverted Half Pyramid
            for (int i = rows; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    if (j == 1 || j == i || i == rows) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        case 4:
            // Full Pyramid
            for (int i = 1; i <= rows; ++i) {
                for (int space = 1; space <= rows - i; ++space) {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 5:
            // Inverted Full Pyramid
            for (int i = rows; i >= 1; --i) {
                for (int space = 1; space <= rows - i; ++space) {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 6:
            // Hollow Full Pyramid
            for (int i = 1; i <= rows; ++i) {
                for (int space = 1; space <= rows - i; ++space) {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; ++j) {
                    if (j == 1 || j == 2 * i - 1 || i == rows) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
