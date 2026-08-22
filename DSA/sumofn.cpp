#include <iostream>              // For input and output
using namespace std;             // Use cin and cout directly

int main() {

    int n;                       // Store the value of n
    int sum = 0;                 // Store the total sum, starting from 0

    cout << "Enter n: ";         // Ask the user to enter n
    cin >> n;                    // Take n as input

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {

        sum += i;                // Add the current number to sum
    }

    cout << "Sum = " << sum;     // Print the final sum

    return 0;                    // End the program
}