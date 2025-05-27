#include <bits/stdc++.h>

using namespace std;

void MaiorElemento(const vector<int>& V, int &maior) {
    maior = V[0];
    for (int i = 1; i < V.size(); i++) {
        if (V[i] > maior) {
            maior = V[i];
        }
    }
}

void GerandoElementos(vector<int> &V, int n) {
    srand(time(0));
    V.resize(n);
    for (int i = 0; i < n; i++) {
        V[i] = rand() % 101; 
    }
}

int main () {
    int n = 0, maior = 0;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    MaiorElemento(V, maior);
    cout << "Maior elemento do vetor digitado: " << maior << endl;

    cout << "Gerando elementos aleatorios:" << endl;

    n = 20;
    GerandoElementos(V, n);
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
    MaiorElemento(V, maior);
    cout << "Maior elemento do vetor aleatorio: " << maior << endl;
    return 0;
}