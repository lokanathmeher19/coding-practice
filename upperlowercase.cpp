#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter char: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "uppercase\n";
    }
    else {
        cout << "Not an alphabet\n";
    }

    return 0;
}