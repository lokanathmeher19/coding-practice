// 2. Character Stuffing

#include <iostream>
#include <string>
using namespace std;

int main() {
    string data, stuffed = "";

    char FLAG = '$';
    char ESC = '/';

    cout << "Enter data: ";
    cin >> data;

    stuffed += FLAG;

    for (char ch : data) {
        if (ch == FLAG || ch == ESC) {
            stuffed += ESC;
        }

        stuffed += ch;
    }

    stuffed += FLAG;

    cout << "\nOriginal Data: " << data;
    cout << "\nAfter Character Stuffing: " << stuffed << endl;

    return 0;
}