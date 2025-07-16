#include <bits/stdc++.h>

using namespace std;

int main () {
    // Declaração da variável para armazenar a palavra
    string frase;
    cout << "Insira uma frase: ";
    getline(cin, frase); // Lê a frase completa em formato de string
    // Declaração da variável para armazenar a pilha
    stack <char> pilha;
    cout << endl << "Frase com palavras invertidas: " << endl;
    for(int i = 0; i < frase.size(); i++){
        if(frase[i] != ' ' && frase[i] != '\n') { // Verifica se o caractere não é espaço ou quebra de linha para ai sim invertemos a palavra
            pilha.push(frase[i]);
        } else { // Se for espaço ou quebra de linha, imprime a palavra invertida e limpa a pilha
            while(!pilha.empty()){
                cout << pilha.top();
                pilha.pop();
            }
            cout << frase[i]; // Sendo um espaço ou quebra de linha ele eh impresso para dividir as palavras
        }
    }
    return 0;
}