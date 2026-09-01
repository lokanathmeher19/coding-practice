#include <iostream>              // For input and output
using namespace std;             // Use cin and cout directly

int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}