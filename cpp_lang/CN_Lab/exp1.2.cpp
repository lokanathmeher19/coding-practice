#include <iostream>
#include <string>
using namespace std;

int main() {
    string data, stuffed = "";

    string FLAG = "F";
    string ESC = "E";

    cout << "Enter data: ";
    cin >> data;

    stuffed += FLAG;

    for (char ch : data) {
        if (ch == 'F' || ch == 'E') {
            stuffed += ESC;
        }

        stuffed += ch;
    }

    stuffed += FLAG;

    cout << "\nOriginal Data: " << data;
    cout << "\nAfter Byte Stuffing: " << stuffed << endl;

    return 0;
}