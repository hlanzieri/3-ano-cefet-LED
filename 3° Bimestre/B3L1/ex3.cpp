#include <bits/stdc++.h>

using namespace std;

map<char, double> valorNota = {
    {'W', 1.0},
    {'H', 0.5},
    {'Q', 0.25},
    {'E', 0.125},
    {'S', 0.0625},
    {'T', 0.03125},
    {'X', 0.015625}
};

auto somaCompasso(const string& compasso) {
    double soma = 0;
    for (char c : compasso)
        soma += valorNota[c];
    return soma;
}

auto contaCompassosCorretos(const string& melodia) {
    unsigned short corretos = 0;
    size_t inicio = 0, fim;
    while ((fim = melodia.find('/', inicio)) != string::npos) {
        string compasso = melodia.substr(inicio, fim - inicio);
        if (somaCompasso(compasso) == 1.0)
            corretos++;
        inicio = fim + 1;
    }
    return corretos;
}

int main () {
    string melodia;
    while (cin >> melodia) {
        if (melodia == "*")
            break;
        cout << contaCompassosCorretos(melodia.substr(1)) << endl;
    }
    return 0;
}