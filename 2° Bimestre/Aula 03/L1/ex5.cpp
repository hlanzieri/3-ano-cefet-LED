#include <bits/stdc++.h>
using namespace std;

void invertePilha(stack<int> &P) {
    queue<int> fila;
    // Passa todos os elementos da pilha para a fila
    while (!P.empty()) {
        fila.push(P.top());
        P.pop();
    }
    // Passa de volta para a pilha (agora invertida)
    while (!fila.empty()) {
        P.push(fila.front());
        fila.pop();
    }
}

void imprimePilha(stack<int> P) {
    vector<int> temp;
    // Guarda os elementos para imprimir na ordem correta
    while (!P.empty()) {
        temp.push_back(P.top());
        P.pop();
    }
    // Imprime do último para o primeiro (base para topo)
    for (int i = temp.size() - 1; i >= 0; i--) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    stack<int> P;
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        int x = rand() % 70 - 23;
        P.push(x);
    }

    invertePilha(P);

    cout << "Pilha invertida: ";
    imprimePilha(P);

    // Após imprimir, a pilha P ainda contém os mesmos elementos
    return 0;
}