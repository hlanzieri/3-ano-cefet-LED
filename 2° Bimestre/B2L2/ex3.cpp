#include <bits/stdc++.h>

using namespace std;

int main () {
    string frase, fraseAlternada;
    cout << "Insira uma frase:" << endl;
    getline(cin, frase);
    for(int i = 0; i < frase.size(); i++){
        if (isupper(frase[i])) {
            fraseAlternada += tolower(frase[i]);
        } else if (islower(frase[i])) {
            fraseAlternada += toupper(frase[i]);
        } else {
            fraseAlternada += frase[i];
        }
    }
    cout << fraseAlternada << endl;
    return 0;
}