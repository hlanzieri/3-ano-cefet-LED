#include <bits/stdc++.h>

using namespace std;

void contaPares(queue<int> fila) {
    int cont = 0;
    while (!fila.empty()) {
        if (fila.front() % 2 == 0) {
            cont++;
        }
        fila.pop();
    }
    cout << "Quantidade de numeros pares: " << cont << endl;
}

int main () {
    queue<int> fila;
    srand(time(0));
    for(int i = 0; i < 25; i++){
        int x;
        x = rand() % 36 + 15; 
        fila.push(x);
    }
    contaPares(fila);
    return 0;
}