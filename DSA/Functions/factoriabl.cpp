#include <iostream>              // For input and output
using namespace std;             // Use cout directly

int factorialN(int n){
    int fact = 1;                 // Store the factorial

    for(int i = 1; i <= n; i++){
        fact *= i;                // Multiply i to fact
    }

    return fact;
}

int main() {
    cout << factorialN(5) << endl;
    cout << factorialN(10) << endl;    // Call factorialN function
    return 0;                    // End the program
}