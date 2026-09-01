#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;                   // Number of rows

    for (int i = 0; i < n; i++) {       // Outer loop: controls rows
        for (int j = i + 1; j > 0; j--) { // Start from i+1 and decrease j

            cout << j << " ";             // Print j
        }

        cout << endl;                     // Move to next row
    }

    return 0;                    // End program
}