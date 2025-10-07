#include <bits/stdc++.h>

using namespace std;

void imprimir(set <int> valores){
    for(int v : valores){
        cout << v << " ";
    }
}

int main () {
    srand(time(0));
    set <int> valores;
    // Inserir valores
    for(int i = 0; i < 30; i++){
        int num = rand() % 201 - 100;
        valores.insert(num);
    }
    cout << endl;
    imprimir(valores);
    return 0;
}