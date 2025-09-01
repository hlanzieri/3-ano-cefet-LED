#include <bits/stdc++.h>

using namespace std;

int main () {
    string frase, palavra;
    int idx = 1;
    cout << "Insira uma frase:" << endl;
    getline(cin, frase);
    frase += ' ';
    for(int i = 0; i < frase.size(); i++) {
        if(frase[i] == ' ') {
            if(!palavra.empty()) {
                if(idx % 2 == 0) reverse(palavra.begin(), palavra.end());
                for(int j = 0; j < palavra.size(); j++) {
                    char letra = palavra[j];
                    if(isupper(letra)) cout << (char)tolower(letra);
                    else if(islower(letra)) cout << (char)toupper(letra);
                    else cout << letra;
                }
                cout << " ";
                palavra.clear();
                idx++;
            }
        } else {
            palavra += frase[i];
        }
    }
    return 0;
}