#include <bits/stdc++.h>

using namespace std;

double Soma(double n){
    double S = 0;
    for(int i = 0; i <= n; i++) {
        S+=1.0/i;
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