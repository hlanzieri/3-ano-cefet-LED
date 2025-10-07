#include <bits/stdc++.h>

using namespace std;

int main () {
    srand(time(0));
    set <int> valores;
    int vMax = 0, vMin = 0;
    cout << "Insira o intervalo (primeiro o menor e depois o maior):" << endl;
    cin >> vMin >> vMax;
    for(int i = 0; i < (vMax - vMin); i++){
        int num = rand() % (vMax - vMin + 1) + vMin;
        valores.insert(num);
    }
    cout << endl << "Valores gerados:";
    for(int v : valores){
        cout << v << " ";
    }
    cout << endl << "Valores não gerados:";
    for(int i = vMin; i <= vMax; i++){
        if(valores.count(i) == 0){
            cout << i << " ";
        }
    }
    return 0;
}