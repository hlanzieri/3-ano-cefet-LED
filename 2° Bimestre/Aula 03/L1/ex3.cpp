#include <bits/stdc++.h>

using namespace std;

void apagaNegativos(queue<int> &fila) {
    queue<int> temp;
    while (!fila.empty()) {
        if (fila.front() >= 0) {
            temp.push(fila.front());
        }
        fila.pop();
    }
    fila = temp; // Atualiza a fila original com os valores não negativos
    cout << "Fila apos remover negativos: ";
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
        x = rand() % 56 - 35; 
        fila.push(x);
    }
    apagaNegativos(fila);
    return 0;
}