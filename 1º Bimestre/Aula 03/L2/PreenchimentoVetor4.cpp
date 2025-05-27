#include <bits/stdc++.h>
using namespace std;

int main() {
    int E[15], P[5], I[5];
    int p = 0, q = 0;

    for (int i = 0; i < 15; i++) {
        cin >> E[i];
        if (E[i] % 2 == 0) {
            P[p++] = E[i];
            if (p == 5) {
                for (int j = 0; j < 5; j++)
                    cout << "par[" << j << "] = " << P[j] << endl;
                p = 0;
            }
        } else {
            I[q++] = E[i];
            if (q == 5) {
                for (int j = 0; j < 5; j++)
                    cout << "impar[" << j << "] = " << I[j] << endl;
                q = 0;
            }
        }
    }

    for (int j = 0; j < q; j++)
        cout << "impar[" << j << "] = " << I[j] << endl;
    for (int j = 0; j < p; j++)
        cout << "par[" << j << "] = " << P[j] << endl;

    return 0;
}