#include <iostream>
#include <string>
using namespace std;

int main() {
    string data;

    cout << "Enter data: ";
    cin >> data;

    int count = data.length() + 1;   // +1 for count field

    cout << "\nOriginal Data: " << data;
    cout << "\nCharacter Count Frame: " << count << data << endl;

    return 0;
}
