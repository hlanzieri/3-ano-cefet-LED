#include <bits/stdc++.h>

using namespace std;

void insercaovetor(vector<int> &V, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        V[i] = rand() % 91 + 10;    
    }
}

int ocorrencias_v(int n, int v, vector<int> &V){
    int cont = 0;
    for (int i = 0; i < n; i++){
        if (V[i] == v){
            cont++;
        }
    }
    return cont;
}

int main () {
    int n = 0, v = 0;
    cin >> n >> v;
    vector<int> V(n);
    insercaovetor(V, n);
    int cont = ocorrencias_v(n, v, V);
    cout << "O elemento " << v << " foi encontrado " << cont << " vezes no vetor." << endl;
    return 0;
}