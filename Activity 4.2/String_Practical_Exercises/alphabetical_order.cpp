#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    vector<string> names(n);

    cout << "Enter names:\n";
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        cout << "Name " << (i + 1) << ": ";
        getline(cin, names[i]);
    }

    sort(names.begin(), names.end());

    cout << "\nNames in alphabetical order:\n";
    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}
