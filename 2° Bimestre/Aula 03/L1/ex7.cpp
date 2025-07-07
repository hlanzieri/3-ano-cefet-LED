#include <bits/stdc++.h>

using namespace std;

void inverteFila(queue<int> &fila){
    stack<int> pilha;
    // Coloca os elementos da fila na pilha
    queue <int> temp = fila;
    while(!temp.empty()){
        pilha.push(temp.front());
        temp.pop();
    }
    // Invertendo a fila
    while(!pilha.empty()){
        fila.push(pilha.top());
        pilha.pop();
    }
}

int main () {
    queue<int> fila;
    srand(time(0));
    for(int i = 0; i < 20; i++){
        fila.push(rand() % 26 - 10);
    }
    queue<int> temp = fila;
    cout << "Fila original: ";
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    inverteFila(fila);
    cout << endl << "Fila invertida: ";
    while(!fila.empty()){
        cout << fila.front() << " ";
        fila.pop();
    }
    cout << endl;
    return 0;
}