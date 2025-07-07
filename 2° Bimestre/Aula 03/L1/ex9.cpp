#include <bits/stdc++.h>

using namespace std;

void verificaPalindromo(string &conteudo){
    string conteudoinvertido;
    stack<char> pilha;
    // Coloca os caracteres na pilha
    for (char c : conteudo) {
        if (isalnum(c)) { // Verifica se é alfanumérico
            pilha.push(tolower(c)); // Converte para minúsculo e coloca na pilha
        }
    }
    // Inverte o conteúdo
    while (!pilha.empty()) {
        conteudoinvertido += pilha.top();
        pilha.pop();
    }
    // Verifica se é palíndromo
    for(int i = 0; i < conteudo.length(); i++) {
        if (isalnum(conteudo[i])) { // Verifica se é alfanumérico
            if (tolower(conteudo[i]) != conteudoinvertido[i]) {
                cout << "A frase nao eh um palindromo." << endl;
                return;
            }
        }
    }
    cout << "A frase eh um palindromo." << endl;
}

int main () {
    string conteudo;
    cout << "---------- VERIFICADOR DE PALINDROMOS ----------" << endl;
    getline(cin, conteudo);
    cout << "-----------------------------------------------" << endl;
    verificaPalindromo(conteudo);
    return 0;
}