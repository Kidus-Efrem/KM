#include <iostream>

using namespace std;

int main() {
    const int rows = 3, cols = 4;
    int array[rows][cols];

    cout << "Enter elements for the 2D array:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> array[i][j];

    cout << "Row product and column sum:\n";
    for (int i = 0; i < rows; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < cols; ++j)
            rowProduct *= array[i][j];
        cout << "Row " << (i + 1) << ": " << rowProduct << endl;
    }

    cout << "Column sum:\n";
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i)
            colSum += array[i][j];
        cout << "Column " << (j + 1) << ": " << colSum << endl;
    }

    return 0;
}
