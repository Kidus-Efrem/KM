#include <iostream>
using namespace std;

int main() {
    // Constants
    const double PENSION_RATE = 0.07;
    const double TAX_RATE = 0.15;

    // Variables
    double grossSalary, workedHours, overtimeRate, overtimeHours, overtimePayment, netSalary;

    // Input: Read user inputs
    cout << "Enter Gross Salary: $";
    cin >> grossSalary;

    cout << "Enter Worked Hours: ";
    cin >> workedHours;

    // Calculate pension
    const double pension = grossSalary * PENSION_RATE;

    // Adjust gross salary after pension deduction
    grossSalary -= pension;

    // Check overtime
    if (workedHours > 40) {
        // Input: Read overtime bonus rate/hour
        cout << "Enter Overtime Bonus Rate per Hour: $";
        cin >> overtimeRate;

        // Calculate overtime hours and payment
        overtimeHours = workedHours - 40;
        overtimePayment = overtimeHours * overtimeRate;
    } else {
        overtimeHours = 0;
        overtimePayment = 0;
    }

    // Calculate total revenue and income tax
    const double totalRevenue = grossSalary + overtimePayment;
    const double incomeTax = totalRevenue * TAX_RATE;

    // Calculate net salary
    netSalary = totalRevenue - incomeTax;

    // Output: Display payslip
    cout << "\n----- Payslip -----\n";
    cout << "Adjusted Gross Salary (after pension deduction): $" << grossSalary + pension << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Payment: $" << overtimePayment << endl;
    cout << "Pension Deduction: $" << pension << endl;
    cout << "Income Tax Deduction: $" << incomeTax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
