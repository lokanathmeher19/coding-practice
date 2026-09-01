#include <iostream>              // For input and output
using namespace std;             // Use cin and cout directly

// Function to find the sum of 2 numbers
double sum(double a, double b) {

    double s = a + b;            // Add a and b
    return s;                    // Return the sum
}

// Function to find the minimum of 2 numbers
int minOfTwo(int a, int b) {

    if (a < b) {                 // Check if a is smaller than b
        return a;                // Return a
    }
    else {
        return b;                // Otherwise, return b
    }
}

int main() {

    cout << sum(10, 20) << endl;       // Call sum function
    cout << minOfTwo(10, 20) << endl;  // Call minOfTwo function

    return 0;                    // End the program
}