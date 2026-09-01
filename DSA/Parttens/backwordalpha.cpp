#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;                   // Number of rows

    for (int i = 0; i < n; i++) {        // Outer loop: controls rows

        for (int j = i; j >= 0; j--) {   // Inner loop: decrease j

            cout << char('A' + j) << " "; // Convert j into alphabet
        }

        cout << endl;                     // Move to next row
    }

    return 0;                    // End program
}