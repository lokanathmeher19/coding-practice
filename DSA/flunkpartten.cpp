#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;                   // Number of rows
                     // Start number from 1
    int num = 1;                 // Start number from 1
    
    for (int i = 0; i < n; i++) {        // Outer loop: controls rows         // Start from A for each row
        for (int j = 0; j < i + 1; j++) { // Inner loop: prints i + 1 numbers

            cout << num << " ";           // Print current number
            num++;                        // Increase number by 1
        }

        cout << endl;                     // Move to next row
    }

    return 0;                    // End program
}