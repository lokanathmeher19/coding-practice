#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to encrypt the text using a shift key
string encrypt(string text, int key) {
    string encryptedText = "";

    for (char ch : text) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            encryptedText += (ch - base + key) % 26 + base;
        } else {
            encryptedText += ch;
        }
    }

    return encryptedText;
}

// Function to decrypt the encrypted text
string decrypt(string encryptedText, int key) {
    string decryptedText = "";

    for (char ch : encryptedText) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            decryptedText += char(base + (ch - base - key + 26) % 26);
        } else {
            decryptedText += ch;
        }
    }

    return decryptedText;
}

int main() {
    string text;
    int key;

    cout << "Enter the text to encrypt: ";
    getline(cin, text);

    cout << "Enter the encryption key (1-25): ";
    cin >> key;

    if (key < 1 || key > 25) {
        cout << "Invalid key. Please enter a value between 1 and 25." << endl;
        return 1;
    }

    string encryptedText = encrypt(text, key);
    cout << "Encrypted Text: " << encryptedText << endl;

    string decryptedText = decrypt(encryptedText, key);
    cout << "Decrypted Text: " << decryptedText << endl;

    return 0;
}