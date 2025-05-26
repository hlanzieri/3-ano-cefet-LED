#include <iostream>
using namespace std;

int potencia(int a, int b) {
    if (b == 0)
        return 1;
    return a * potencia(a, b - 1);
}

int main() {
    int base, expoente;
    cout << "Digite a base (a): ";
    cin >> base;
    cout << "Digite o expoente (b): ";
    cin >> expoente;

    if (expoente < 0) {
        cout << "O expoente deve ser um número natural (>= 0)." << endl;
    } else {
        int resultado = potencia(base, expoente);
        cout << base << "^" << expoente << " = " << resultado << endl;
    }
    return 0;
}