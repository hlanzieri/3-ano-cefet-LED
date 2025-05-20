#include <bits/stdc++.h>
using namespace std;

double Soma(double M[12][12]) {
    double soma = 0.0;
    for (int i = 1; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
        }
    }
    return soma;
}

int main() {
    char O = ' ';
    double M[12][12];
    cin >> O;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double soma = Soma(M);

    switch (O) {
        case 'S':
            cout << fixed << setprecision(1) << soma << endl;
            break;
        case 'M':
            cout << fixed << setprecision(1) << soma / 66.0 << endl;
            break;
    }
    return 0;
}