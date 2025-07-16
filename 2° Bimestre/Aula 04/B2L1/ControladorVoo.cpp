#include <bits/stdc++.h>

using namespace std;

// Definindo a função imprime que recebe uma fila e um ponteiro para a quantidade de elementos
void imprime(queue<string> & fila, int *quantidade);

int main() {
    queue<string> filas[4]; // 0: leste, 1: norte, 2: sul, 3: oeste
    string input;
    int n = 0, quantidade = 0;
    // Lendo as entradas até que o usuário digite 0
    do {
        cin >> input;
        if(input[0] != 'A') {
            n = stoi(input);
        } else {
            filas[n+4].push(input);
            quantidade++;
        }
    } while(n != 0);

    // Imprimindo as filas na ordem: oeste, norte, sul, leste
    while(quantidade > 0) {
        imprime(filas[3], &quantidade); // oeste
        imprime(filas[1], &quantidade); // norte
        imprime(filas[2], &quantidade); // sul
        imprime(filas[0], &quantidade); // leste
    }

    cout << endl;
    return 0;
}

// Implementação da função imprime, que printa o primeiro elemento da fila e decrementa a quantidade de elementos restantes
void imprime(queue<string> & fila, int *quantidade) {
    if(!fila.empty()) {
        cout << fila.front();
        fila.pop();
        (*quantidade)--;
        if(*quantidade != 0) {
            cout << " ";
        }
    }
}