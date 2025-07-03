#include <bits/stdc++.h>

using namespace std;

int main() {
    int L;
    while (cin >> L) {
        int maior = 0, v;
        for (int i = 0; i < L; i++) {
            cin >> v;
            if (v > maior) {
                maior = v;
            }
        }
        if (maior < 10) {
            cout << 1 << endl;
        } else if (maior < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}