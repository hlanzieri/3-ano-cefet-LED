#include <bits/stdc++.h>
using namespace std;

int main (){
    int T = 0, N[1000] = {0};
    cin >> T;
    for (int i = 0; i < 1000; i++){
        N[i] = i % T;
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}
