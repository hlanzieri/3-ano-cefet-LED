#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void Primos(int m, int &primo_menor, int &primo_maior) {
    // Procurar primo menor
    primo_menor = -1;
    for (int i = m-1; i >= 2; i--) {
        if (ehPrimo(i)) {
            primo_menor = i;
            break;
        }
    }
    // Procurar primo maior
    primo_maior = -1;
    for (int i = m+1; ; i++) {
        if (ehPrimo(i)) {
            primo_maior = i;
            break;
        }
    }
}

int main () {
    int m = 0, primo_maior = 0, primo_menor = 0;
    cin >> m;
    Primos(m, primo_menor, primo_maior);
    cout << "Primo menor: " << primo_menor << endl;
    cout << "Primo maior: " << primo_maior << endl;
    return 0;
}