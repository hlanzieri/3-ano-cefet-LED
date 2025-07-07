#include <bits/stdc++.h>

using namespace std;

queue<int> intercalaFilas(queue<int> &F1, queue<int> &F2){
    queue <int> F3;
    for(int i = 0; i < 20; i++){
        if(i % 2 == 0 && !F1.empty()) {
            F3.push(F1.front());
            F1.pop();
        } else if (i % 2 != 0 && !F2.empty()) {
            F3.push(F2.front());
            F2.pop();
        }
    }
    return F3;
}

int main () {
    queue<int> F1;
    queue<int> F2;
    queue<int> F3;

    srand(time(0));
    for(int i = 0; i < 20; i++){
        int x;
        x = rand() % 31 - 15;
        if( i <= 9) {
            F1.push(x);
        } else {
            F2.push(x);
        }
    }

    // Imprime F1 sem esvaziar
    cout << "Fila F1: ";
    queue<int> tempF1 = F1;
    while(!tempF1.empty()) {
        cout << tempF1.front() << " ";
        tempF1.pop();
    }
    cout << endl;

    // Imprime F2 sem esvaziar
    cout << "Fila F2: ";
    queue<int> tempF2 = F2;
    while(!tempF2.empty()) {
        cout << tempF2.front() << " ";
        tempF2.pop();
    }
    cout << endl;

    // Intercala as filas originais
    F3 = intercalaFilas(F1, F2);

    // Imprime F3
    cout << "Fila F3: ";
    while(!F3.empty()) {
        cout << F3.front() << " ";
        F3.pop();
    }
    cout << endl;
    return 0;
}