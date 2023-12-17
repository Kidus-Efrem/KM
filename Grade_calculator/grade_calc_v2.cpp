#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam;

    // Input: Read assessment marks from the user
    cout << "Enter Test mark (out of 15): ";
    cin >> test;

    cout << "Enter Quiz mark (out of 5): ";
    cin >> quiz;

    cout << "Enter Project mark (out of 20): ";
    cin >> project;

    cout << "Enter Assignment mark (out of 10): ";
    cin >> assignment;

    cout << "Enter Final Exam mark (out of 50): ";
    cin >> finalExam;

    // Calculate total mark based on weightings
    double totalMark = test + quiz + project + assignment + finalExam * 0.50;

    // Convert total mark to letter grade based on the specified scale
    if (totalMark >= 90) {
        cout << "Letter Grade: A" << endl;
    } else if (totalMark >= 80) {
        cout << "Letter Grade: B" << endl;
    } else if (totalMark >= 70) {
        cout << "Letter Grade: C" << endl;
    } else if (totalMark >= 60) {
        cout << "Letter Grade: D" << endl;
    } else {
        cout << "Letter Grade: F" << endl;
    }

    return 0;
}
