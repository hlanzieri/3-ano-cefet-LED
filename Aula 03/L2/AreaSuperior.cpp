#include <bits/stdc++.h>

using namespace std;

double Soma(double M[12][12]){
    double soma = 0.0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i < j && i + j < 11) {
                soma += M[i][j];
            }
        }
    }
    return soma;
}

int main () {
    char O = ' ';
    double M[12][12];
    cin >> O;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    double soma = Soma(M);

    cout << fixed << setprecision(1);
    if(O == 'S'){
        cout << soma << endl;
    } else{
        cout << soma/30.0 << endl;
    }
    return 0;
}