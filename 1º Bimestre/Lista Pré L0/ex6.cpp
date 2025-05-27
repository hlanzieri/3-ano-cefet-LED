#include <bits/stdc++.h>

using namespace std;

double Soma(double n){
    double S = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            S -= 1.0/i;
        } else {
            S += 1.0/i;
        }
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