#include<isosteam>
#include<string>

using namespace std;

//function to encrypt the text using a shift key 
string encrypt(string text, int key) 
{ 
    string encryptedText= ""; 

    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // apply transformation to each character 
        // Encrypt Uppercase letters 
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 

    // Encrypt Lowercase letters 
        else
            result += char(int(text[i]+s-97)%26 +97); 
    } 

    // Return the resulting string 
    return result; 
}