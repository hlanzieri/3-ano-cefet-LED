#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x, y;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        int soma = 0, contador = 0;

        while (contador < y) {
            if (x % 2 != 0) { 
                soma += x;
                contador++;
            }
            x++;
        }
        cout << soma << endl;
    }

    return 0;
}