#include <bits/stdc++.h>

using namespace std;

int Soma(int n){
    int S = 0;
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            S += i;
        } else {
            S -= i;
        }
    }
    return S;
}

int main () {
    int S = 0, n = 0;
    cin >> n;
    S = Soma(n);
    cout << S << endl;
    return 0;
}