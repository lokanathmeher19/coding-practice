#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;  
    
    char ch = 'A';            // Start from A for each row

    for (int i = 0; i < n; i++) {        // Outer loop: controls rows

        for (int j = 0; j < i + 1; j++) { // Inner loop: runs i + 1 times

            cout << ch;                    // Print the current character
            ch = ch + 1;                   // Move to the next character
        }

        cout << endl;                    // Move to next line
    }

    return 0;                    // End program
}