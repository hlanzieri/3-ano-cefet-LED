#include <bits/stdc++.h>
using namespace std;

void contarVogaisMinusculas(string &frase) {
    map<char, int> vogais = {{'a',0}, {'e',0}, {'i',0}, {'o',0}, {'u',0}};
    for (char c : frase) {
        if (islower(c) && vogais.count(c)) {
            vogais[c]++;
        }
    }
    bool primeira = true;
    for (auto& par : vogais) {
        if (!primeira) cout << ", ";
        primeira = false;
        cout << par.first << ": " << par.second;
    }
    cout << endl;
}

int main () {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);
    contarVogaisMinusculas(frase);
    return 0;
}
