#include <iostream>

using namespace std;

int somaNaturais(int n) {
    if (n <= 0)
        return 0;
    return n + somaNaturais(n - 1);
}

int main() {
    int n;
    cout << "Digite um número natural N: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor, digite um número natural (>= 0)." << endl;
    } else {
        int resultado = somaNaturais(n);
        cout << "A soma dos números naturais menores ou iguais a " << n << " é: " << resultado << endl;
    }

    return 0;
}