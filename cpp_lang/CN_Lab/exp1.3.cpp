#include <iostream>
#include <string>
using namespace std;

int main() {
    string data, stuffed = "";
    int count = 0;

    cout << "Enter binary data: ";
    cin >> data;

    for (char bit : data) {
        stuffed += bit;

        if (bit == '1') {
            count++;

            if (count == 5) {
                stuffed += '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    cout << "\nOriginal Data: " << data;
    cout << "\nAfter Bit Stuffing: " << stuffed << endl;

    return 0;
}