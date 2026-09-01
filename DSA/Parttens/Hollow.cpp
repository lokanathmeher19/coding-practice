#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int main() {

    int n = 4;                   // Size of the diamond

    // Top half
    for (int i = 0; i < n; i++) {

        // Print spaces before the first star
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";        // Print spaces before the first star
        }

        cout << "*";             // Print first star

        // Print spaces between the two stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << "  ";
            }

            cout << "*";         // Print second star
        }

        cout << endl;            // Move to next row
    }

    // Bottom half
    for (int i = n - 2; i >= 0; i--) {

        // Print spaces before the first star
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        cout << "*";             // Print first star

        // Print spaces between the two stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << "  ";
            }

            cout << "*";         // Print second star
        }

        cout << endl;            // Move to next row
    }

    return 0;                    // End program
}