#include <bits/stdc++.h>

using namespace std;

double Soma(double n){
    double S = 1, aux = 3;
    for(int i = 2; i<= n; i++) {
        S+= i/aux;
        aux += 2;
    }
    return S;
}
int main () {
    double S = 0, n = 0;
    cin >> n;
    S = Soma(n);
    cout << setprecision(2) << fixed;
    cout << S << endl;
    return 0;
}