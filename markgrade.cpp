#include <iostream>              // For input and output
using namespace std;             // Use cin and cout directly

int main() {

    int marks;                   // Store the marks

    cout << "Enter marks: ";     // Ask the user for marks
    cin >> marks;                // Take marks as input

    if (marks >= 90) {            // Check if marks are 90 or above
        cout << "A\n";            // Print Grade A
    }
    else if (marks >= 80 && marks < 90) {  // Check if marks are 80 to 89
        cout << "B\n";            // Print Grade B
    }
    else {
        cout << "C\n";            // Print Grade C
    }

    return 0;                    // End the program
}