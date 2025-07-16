#include <bits/stdc++.h>

using namespace std;

int main () {
    // Declaração da variável para armazenar a frase
    string frase;
    cout << "Insira uma frase: ";
    getline(cin, frase); // Lê a frase completa em formato de string
    // Declaração da variável para armazenar a pilha
    stack <char> pilha;
    for(int i = 0; i < frase.size(); i++){
        pilha.push(frase[i]); // Adiciona cada caractere da frase na pilha
    }
    // Como a pilha atende aos princípios LIFO (Last In, First Out), os caracteres serão retirados na ordem inversa
    cout << "Frase invertida: ";
    // Imprime a frase invertida
    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
    }
    return 0;
}