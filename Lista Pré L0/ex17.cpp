#include <bits/stdc++.h>

using namespace std;

void insercaovetor(vector<int> &V, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        V[i] = rand() % 91 + 10;    
    }
}

int ocorrencias(int n, int v, vector<int> &V){
    for (int i = 0; i < n; i++){
        if (V[i] == v){
            return i;
        }
    }
    return -1;
}

int main () {
    int n = 0, v = 0;
    cin >> n >> v;
    vector<int> V(n);
    insercaovetor(V, n);
    int ex = ocorrencias(n, v, V);
    if (ex == -1){
        cout << "O elemento " << v << " nao foi encontrado no vetor." << endl;
    } else {
        cout << "O elemento " << v << " foi encontrado na posicao " << ex << "." << endl;
    }
    return 0;
}