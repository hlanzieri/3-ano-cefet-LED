#include <bits/stdc++.h>

using namespace std;

int main () {
    stack<int> pilha;

    for(int i = 1; i <= 3; i++){
    pilha.push(i);
    cout << pilha.top() << " ";
    // Retornou "1 2 3"
    }
    cout << endl;
    // Enquanto não estiver vazia, continuar apagando
    while(!pilha.empty()){
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl << pilha.size() << endl;
    return 0;
}