#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N), Y(N); 

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i = 0; i < N; i++) {
        int soma = 0;
        if (X[i] > Y[i]) {
            swap(X[i], Y[i]);
        }
        for (int j = X[i] + 1; j < Y[i]; j++) { 
            if (j % 2 != 0) { 
                soma += j;
            }
        }
        cout << soma << endl;
    }
    return 0;
}