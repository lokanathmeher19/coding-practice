#include <iostream>              // For input and output
using namespace std;             // Use cout and cin directly

int main() {

    int age;                     // Store the person's age

    cout << "Enter age: ";       // Ask for age
    cin >> age;                  // Take age as input

    if (age >= 18) {             // Check if age is 18 or more
        cout << "You can vote\n";    // Eligible to vote
    }
    else {
        cout << "You can't vote\n";  // Not eligible to vote
    }

    return 0;                    // End the program
}