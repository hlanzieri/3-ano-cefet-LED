#include <bits/stdc++.h>

using namespace std;

void invertePalavras(const string& frase) {
    stack<char> pilha;
    for (char c : frase) {
        if (c != ' ') {
            pilha.push(c);
        } else {
            // Desempilha e imprime a palavra invertida
            while (!pilha.empty()) {
                cout << pilha.top();
                pilha.pop();
            }
            cout << " ";
        }
    }
    // Imprime a última palavra (caso não termine com espaço)
    while (!pilha.empty()) {
        cout << pilha.top();
        pilha.pop();
    }
    cout << endl;
}

int main() {
    string frase;
    cout << "Insira uma frase: ";
    getline(cin, frase);
    cout << "Frase invertida: ";
    invertePalavras(frase);
    return 0;
}