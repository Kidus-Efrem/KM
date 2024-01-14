#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int temp[SIZE], total = 0;
    cout << "Enter eight numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> temp[i];
        total += temp[i];
    }
    double average = total / static_cast<double>(SIZE);
    cout << "Total: " << total << "\nAverage: " << average << "\n";
    return 0;
}
