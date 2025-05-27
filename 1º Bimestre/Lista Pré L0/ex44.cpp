#include <bits/stdc++.h>

using namespace std;

void imprime_vetor(int *vet, int n, int i = 0) {
    if (i == n) return;
    cout << vet[i] << " ";
    imprime_vetor(vet, n, i + 1);
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
    cout << "Vetor: ";
    imprime_vetor(vet, n);
    cout << endl;
    return 0;
}