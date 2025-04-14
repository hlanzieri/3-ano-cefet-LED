#include <bits/stdc++.h>

using namespace std;

int main () {
    int N = 0, C = 0, R = 0, S = 0;
    cin >> N;

    vector<int> X(N); 
    vector<char> Y(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        switch (Y[i]) {
            case 'C':
                C += X[i];
                break;
            case 'R':
                R += X[i];
                break;
            case 'S':
                S += X[i];
                break;
        }
    }

    cout << "Total: " << C + R + S << " cobaias" << endl;
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (C * 100.0) / (C + R + S) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (R * 100.0) / (C + R + S) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (S * 100.0) / (C + R + S) << " %" << endl;

    return 0;
}