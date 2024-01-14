#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int test, assignment, quiz, project, finalScore;

    cout << "Enter scores (test assignment quiz project final): ";
    cin >> test >> assignment >> quiz >> project >> finalScore;

    int total = test + assignment + quiz + project + finalScore;

    string scoreLevel = (total >= 80) ? "Excellent" :
                        (total >= 60) ? "Very Good" :
                        (total >= 50) ? "Fair" :
                        (total >= 40) ? "Poor" : "Fail";

    cout << "\nScore Level Table\n-----------------\n";
    cout << "Test | Assignment | Quiz | Project | Final | Total | Score Level\n";
    cout << "-----------------\n";
    cout << setw(4) << test << " | " << setw(11) << assignment << " | " << setw(4) << quiz << " | " << setw(7) << project << " | ";
    cout << setw(5) << finalScore << " | " << setw(5) << total << " | " << scoreLevel << "\n";
    cout << "-----------------\n";

    return 0;
}
