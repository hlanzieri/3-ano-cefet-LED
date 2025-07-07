#include <bits/stdc++.h>

using namespace std;

void printaFila(queue<int> fila) {
    while (!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop();
    }
    cout << endl;
}

int main () {
    queue<int> fila;
    srand(time(0));
    for(int i = 0; i < 30; i++){
        int x;
        x = rand() % 201 - 100;
        fila.push(x);
    }
    printaFila(fila);
    return 0;
}