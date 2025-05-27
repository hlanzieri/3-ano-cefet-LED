#include <bits/stdc++.h>

using namespace std;

void verificamaior(vector<int> &V, int n, int *maior) {
    *maior = V[0];
    for (int i = 1; i < n; i++) {
        if (V[i] > *maior) {
            *maior = V[i];
        }
    }
}

void ocorrencia_maior(vector<int> &V, int n, int *maior, int *nvezes) {
    *nvezes = 0;
    for (int i = 0; i < n; i++) {
        if (V[i] == *maior) {
            (*nvezes)++;
        }
    }
}

int main () {
    int n = 0, maior = 0, nvezes = 0;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    verificamaior(V, n, &maior);
    cout << "O maior elemento do vetor digitado: " << maior << endl;
    ocorrencia_maior(V, n, &maior, &nvezes);
    cout << "O maior elemento " << maior << " ocorre " << nvezes << " vezes no vetor." << endl;
    return 0;
}