#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, num;

    do {
        // Display menu
        cout << "\nMenu:" << endl;
        cout << "a) Reverse Number" << endl;
        cout << "b) Count Digits" << endl;
        cout << "c) Sum of Digits" << endl;
        cout << "d) Product of Even Digits" << endl;
        cout << "e) First and Last Digit" << endl;
        cout << "f) Check Palindrome" << endl;
        cout << "g) Digit Frequency" << endl;
        cout << "h) Check Armstrong Number" << endl;
        cout << "j) Check Strong Number" << endl;
        cout << "k) Check Perfect Number" << endl;
        cout << "Enter 0 to exit." << endl;

        // Input choice
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter a number: ";
                cin >> num;
                // Reverse Number
                {
                    int reversed = 0;
                    while (num > 0) {
                        reversed = reversed * 10 + num % 10;
                        num /= 10;
                    }
                    cout << "Reversed Number: " << reversed << endl;
                }
                break;
            case 'b':
                cout << "Enter a number: ";
                cin >> num;
                // Count Digits
                {
                    int count = 0;
                    while (num > 0) {
                        num /= 10;
                        count++;
                    }
                    cout << "Number of Digits: " << count << endl;
                }
                break;
            case 'c':
                cout << "Enter a number: ";
                cin >> num;
                // Sum of Digits
                {
                    int sum = 0;
                    while (num > 0) {
                        sum += num % 10;
                        num /= 10;
                    }
                    cout << "Sum of Digits: " << sum << endl;
                }
                break;
            case 'd':
                cout << "Enter a number: ";
                cin >> num;
                // Product of Even Digits
                {
                    int product = 1;
                    while (num > 0) {
                        int digit = num % 10;
                        if (digit % 2 == 0) {
                            product *= digit;
                        }
                        num /= 10;
                    }
                    cout << "Product of Even Digits: " << product << endl;
                }
                break;
            case 'e':
                cout << "Enter a number: ";
                cin >> num;
                // First and Last Digit
                {
                    int lastDigit = num % 10;
                    while (num >= 10) {
                        num /= 10;
                    }
                    int firstDigit = num;
                    int sum = firstDigit + lastDigit;

                    cout << "First Digit: " << firstDigit << endl;
                    cout << "Last Digit: " << lastDigit << endl;
                    cout << "Sum of First and Last Digit: " << sum << endl;
                }
                break;
            case 'f':
                cout << "Enter a number: ";
                cin >> num;
                // Check Palindrome
                {
                    int originalNum = num;
                    int reversed = 0;
                    while (num > 0) {
                        reversed = reversed * 10 + num % 10;
                        num /= 10;
                    }
                    cout << (reversed == originalNum ? "Palindrome" : "Not Palindrome") << endl;
                }
                break;
            case 'g':
                cout << "Enter a number: ";
                cin >> num;
                // Digit Frequency
                {
                    int count[10] = {0}; // Array to store the frequency of each digit

                    while (num > 0) {
                        count[num % 10]++;
                        num /= 10;
                    }

                    cout << "Digit\tFrequency" << endl;
                    for (int i = 0; i < 10; i++) {
                        if (count[i] > 0) {
                            cout << i << "\t" << count[i] << endl;
                        }
                    }
                }
                break;
            case 'h':
                cout << "Enter a number: ";
                cin >> num;
                // Check Armstrong Number
                {
                    int originalNum = num;
                    int n = 0;
                    int sum = 0;

                    while (num > 0) {
                        num /= 10;
                        n++;
                    }

                    num = originalNum;
                    while (num > 0) {
                        sum += pow(num % 10, n);
                        num /= 10;
                    }

                    cout << (sum == originalNum ? "Armstrong" : "Not Armstrong") << endl;
                }
                break;
            case 'j':
                cout << "Enter a number: ";
                cin >> num;
                // Check Strong Number
                {
                    int originalNum = num;
                    int sum = 0;

                    while (num > 0) {
                        int digit = num % 10;
                        int factorial = 1;
                        for (int i = 1; i <= digit; i++) {
                            factorial *= i;
                        }
                        sum += factorial;
                        num /= 10;
                    }

                    cout << (sum == originalNum ? "Strong" : "Not Strong") << endl;
                }
                break;
            case 'k':
                cout << "Enter a number: ";
                cin >> num;
                // Check Perfect Number
                {
                    int sum = 0;

                    for (int i = 1; i <= num / 2; i++) {
                        if (num % i == 0) {
                            sum += i;
                        }
                    }

                    cout << (sum == num ? "Perfect" : "Not Perfect") << endl;
                }
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
