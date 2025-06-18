#include <bits/stdc++.h>

using namespace std;

int main () {
    int T = 0, x = 0;
    vector<int> N(1000, 0);
    cin >> T;
    for(int i = 0; i < N.size() ; i++){
        x = i % T;
        N[i] = x;
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}