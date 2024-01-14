#include <iostream>
using namespace std;

int main() {
    const int rows = 3, cols = 4;
    int first[rows][cols], second[rows][cols], result[rows][cols];
    cout << "Enter elements for first array:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> first[i][j];
    cout << "Enter elements for second array:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> second[i][j];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = first[i][j] + second[i][j];
    cout << "Resulting elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << result[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}
