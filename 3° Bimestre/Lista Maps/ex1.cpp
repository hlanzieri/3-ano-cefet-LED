#include <bits/stdc++.h>

using namespace std;

void contarVogais(string &frase) {
    map<char, int> vogais = {{'a',0}, {'e',0}, {'i',0}, {'o',0}, {'u',0}};
    for (char c : frase) { // Percorre cada caractere da frase
        if (vogais.count(c)) { // Verifica se o caractere é uma vogal
            vogais[c]++; // ++ no contador de cada vogal
        }
    }
    bool primeira = true;
    for (auto& par : vogais) { // Percorre o map de vogais
        if (par.second > 0) { // segundo elemento do map (contador de cada vogal)
            if (!primeira) cout << ", "; // coloca a virgula entre as vogais
            primeira = false;
            cout << par.first << ": " << par.second;
        }
    }
    cout << endl;
}

int main() {
    string frase;
    cout << "Digite uma frase: " << endl;
    getline(cin, frase);
    contarVogais(frase);
    return 0;
}
