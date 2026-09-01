#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 8;                   // Number of rows

    for (int i = 0; i < n; i++) {        // Outer loop: controls rows

        for (int j = 0; j <= i; j++) {   // Inner loop: prints i + 1 stars

            cout << "*";                 // Print one star
        }

        cout << endl;                    // Move to next row
    }

    return 0;                    // End the program
}