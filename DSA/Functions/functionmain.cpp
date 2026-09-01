#include <iostream>              // For input and output
using namespace std;             // Use cout directly

// Function returns the value of x
int fun() {

    int x = 25;                  // Local variable
    cout << "x = " << x << endl; // Print x inside the function

    return x;                    // Send x back to main
}

int main() {

    int x = fun();               // Receive returned value

    cout << x << endl;           // Print x in main

    return 0;                    // End program
}