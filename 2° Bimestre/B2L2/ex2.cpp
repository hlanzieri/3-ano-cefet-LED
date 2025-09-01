#include <bits/stdc++.h>

using namespace std;

int main () {
    string frase;
    cout << "Insira uma frase:" << endl;
    getline(cin, frase);
    for(int i = 0; i < frase.size(); i++){
        if(i == 0 || frase[i-1] == ' '){
            cout << (char)toupper(frase[i]);
        } else{
            cout << frase[i];
        }
    }
    return 0;
}