#include <bits/stdc++.h>

using namespace std;

void MenorElemento(const vector<int>& V, int &menor) {
    menor = V[0];
    for (int i = 1; i < V.size(); i++) {
        if (V[i] < menor) {
            menor = V[i];
        }
    }
}

void GerandoElementos(vector<int> &V, int n) {
    srand(time(0));
    V.resize(n);
    for (int i = 0; i < n; i++) {
        V[i] = rand() % 100 + 1; 
    }
}

int main () {
    int n = 0, menor = 0;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    MenorElemento(V, menor);
    cout << "Menor elemento do vetor digitado: " << menor << endl;

    cout << "Gerando elementos aleatorios:" << endl;

    n = 20;
    GerandoElementos(V, n);
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
    MenorElemento(V, menor);
    cout << "Menor elemento do vetor aleatorio: " << menor << endl;
    return 0;
}