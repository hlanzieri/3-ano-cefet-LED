#include <bits/stdc++.h>

using namespace std;

int produto(int n) {
    if (n <= 1) return 1;
    return n * produto(n - 1);
}

int main () {
    int n;
    cout << "Digite um valor para N: ";
    cin >> n;
    cout << "Produto dos inteiros de 1 a " << n << " = " << produto(n) << endl;
    return 0;
}