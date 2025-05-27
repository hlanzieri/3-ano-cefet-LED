#include <bits/stdc++.h>

using namespace std;

int SomaImpares() {
    int somai = 0;
    int impar = 1;
    for (int i = 0; i < 50; i++) {
        somai += impar;
        impar += 2;
    }
    return somai;
}

int main () {
    int somai = SomaImpares();
    cout << somai << endl;
    return 0;
}