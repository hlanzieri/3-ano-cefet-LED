#include <bits/stdc++.h>

using namespace std;

int main () {
    string frase, palavra;
    cout << "Insira uma frase:" << endl;
    getline(cin, frase);
    for(int i = 0; i < frase.size(); i++){
        if(frase[i] == ' '){
            cout << palavra << endl;
            palavra.clear();
        } else{
            palavra += frase[i];
        }
    }
    if (!palavra.empty()) {
        cout << palavra << endl;
    }
    return 0;
}