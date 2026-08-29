#include <iostream>
using namespace std;

int main() {
    string input;

    cout << "Enter string: ";
    cin >> input;

    // DFA accepts only the string "1"
    if (input == "1")
        cout << "Accepted";
    else
        cout << "Not Accepted";

    return 0;
}