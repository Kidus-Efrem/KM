#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int size = 9;
    double volts[size] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    cout << setw(10) << "Col 1" << setw(15) << "Col 2" << setw(15) << "Col 3" << endl;
    for (int i = 0; i < size; ++i) {
        cout << setw(10) << volts[i];
        if ((i + 1) % 3 == 0) cout << endl;
        else cout << setw(5) << " ";
    }
    return 0;
}
