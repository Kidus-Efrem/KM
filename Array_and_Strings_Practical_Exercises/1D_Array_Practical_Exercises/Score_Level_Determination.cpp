#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int totalMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    string scoreLevel = (totalMarks >= 80) ? "Excellent" : (totalMarks >= 60) ? "Very Good" :
                        (totalMarks >= 50) ? "Fair" : (totalMarks >= 40) ? "Poor" : "Fail";
    cout << "\nScore Level Table\n-----------------\nTotal Marks | Score Level\n-----------------\n";
    cout << setw(11) << totalMarks << " | " << scoreLevel << "\n-----------------\n";
    return 0;
}
