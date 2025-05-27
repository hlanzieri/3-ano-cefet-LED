#include <bits/stdc++.h>

using namespace std;

void imprime_invertido(int *vet, int n) {
    if (n == 0) return;
    cout << vet[n-1] << " ";
    imprime_invertido(vet, n-1);
}

int main () {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vet[n];
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    cout << "Vetor invertido: ";
    imprime_invertido(vet, n);
    cout << endl;
    return 0;
}