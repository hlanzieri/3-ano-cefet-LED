#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;

    int Fatorial = 1;    
    for (int i = 1; i <= N; ++i) {
        Fatorial *= i;
    }
    cout << Fatorial << endl;

    return 0;
}