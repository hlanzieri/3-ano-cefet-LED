#include <bits/stdc++.h>

using namespace std;

int main () {
    // Declaração da variável para armazenar a palavra
    string palavra;
    cout << "Insira uma palavra: ";
    getline(cin, palavra); // Lê a palavra completa em formato de string
    // Declaração da variável para armazenar a fila
    stack <char> pilha; 
    string letras; // Nova string para armazenar apenas letras
    for(int i = 0; i < palavra.size(); i++){
        palavra[i] = tolower(palavra[i]); // Convertendo o caractere para minusculo
        if(palavra[i] >= 'a' && palavra[i] <= 'z') {
            letras += palavra[i];
            pilha.push(palavra[i]); // Adiciona cada caractere alfabético da palavra na pilha
        }
    }
    bool ehPalindromo = true; // Variável para verificar se é palíndromo
    // Como a pilha atende aos princípios LIFO (Last In, First Out), os caracteres serão retirados na ordem inversa
    int i = 0;
    cout << endl;
    while(!pilha.empty()){
        if(letras[i] == pilha.top()){
            i++;
            pilha.pop();
        } else {
            ehPalindromo = false; // Se algum caractere não coincidir, não é palíndromo
            break;
        }
    }
    // Imprime o resultado
    if(ehPalindromo == true) {
        cout << "Sim" << endl;
    } else {
        cout << "Não" << endl;
    }
    return 0;
}