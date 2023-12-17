#include <iostream>
using namespace std;

int main() {
    char operation;
    double operand1, operand2, result;

    do {
        // Input: Operator
        cout << "Enter Operator (+, -, *, /) or 0 to exit: ";
        cin >> operation;

        // Check if the user wants to exit
        if (operation == '0') {
            cout << "Exiting the calculator program." << endl;
            break;
        }

        // Input: Operands
        cout << "Enter Operand 1: ";
        cin >> operand1;

        cout << "Enter Operand 2: ";
        cin >> operand2;

        // Perform Calculation
        switch (operation) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 != 0) {
                    result = operand1 / operand2;
                } else {
                    cout << "Error: Division by zero!" << endl;
                    continue; // Skip displaying result and ask for input again
                }
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
                continue; // Skip displaying result and ask for input again
        }

        // Display Result
        cout << "Result: " << result << endl;

    } while (true); // Continue until the user enters '0'

    return 0;
}
