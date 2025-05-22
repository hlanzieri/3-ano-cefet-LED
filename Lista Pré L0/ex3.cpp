#include <bits/stdc++.h>

using namespace std;

int main () {
    int N = 0, produtospares = 1;
    cout << "Digite um valor N<=20: ";
    cin >> N;
    for(int i = N; i >=1; i--) {
        if (i % 2 == 0) {
            produtospares*= i;
        }
    }
    cout << produtospares << endl;
    return 0;
}