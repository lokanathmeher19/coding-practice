#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;                   // Number of rows
                   // Start from A

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;              // Start from A for each row

        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << "  ";        // Print spaces before the numbers
        }

        // Print numbers
        for (int j = 0; j < n - i; j++) {
            cout << ch << " "; // Print the row number
        }

        cout << endl;             // Move to next row
    }

    return 0;                     // End program
}