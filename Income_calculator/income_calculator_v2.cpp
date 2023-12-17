#include <iostream>
using namespace std;

int main() {
    // Constants
    const double PENSION_RATE = 0.07;

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

    // Calculate total revenue and set income tax rate based on different income brackets
    const double totalRevenue = grossSalary + overtimePayment;

    double incomeTaxRate;
    if (totalRevenue <= 200) {
        incomeTaxRate = 0.0;
    } else if (totalRevenue <= 600) {
        incomeTaxRate = 0.20;
    } else if (totalRevenue <= 1200) {
        incomeTaxRate = 0.25;
    } else {
        incomeTaxRate = 0.30;
    }

    // Calculate income tax
    const double incomeTax = totalRevenue * incomeTaxRate;

    // Calculate net salary
    netSalary = totalRevenue - incomeTax;

    // Output: Display payslip
    cout << "\n----- Payslip -----\n";
    cout << "Adjusted Gross Salary (after pension deduction): $" << grossSalary + pension << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Payment: $" << overtimePayment << endl;
    cout << "Pension Deduction: $" << pension << endl;
    cout << "Income Tax Deduction: $" << incomeTax << " (Tax Rate: " << (incomeTaxRate * 100) << "%)" << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
