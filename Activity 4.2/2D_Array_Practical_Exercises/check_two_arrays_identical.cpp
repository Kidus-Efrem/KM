#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {1, 2, 3, 4, 5};

    bool isIdentical = true;
    for (int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            isIdentical = false;
            break;
        }
    }

    cout << (isIdentical ? "Identical" : "Not Identical") << endl;

    return 0;
}
