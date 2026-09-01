#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 6;                   // Number of rows and columns

    for (int i = 0; i < n; i++) {        // Outer loop: controls rows

        char ch = 'A';            // Start from A for each row

        for (int j = 0; j < n; j++) {    // Inner loop: controls columns

            cout << ch<<" ";           // Print the current character
            ch = ch + 1;          // Move to the next character
        }

        cout << endl;             // Move to the next line
    }

    return 0;                     // End the program
}