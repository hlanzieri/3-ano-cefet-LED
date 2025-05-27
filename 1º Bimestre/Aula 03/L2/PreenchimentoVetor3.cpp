#include <bits/stdc++.h>
using namespace std;

int main (){
    double X = 0, N[100] = {0};
    cin >> X;
    N[0] = X;
    cout << fixed << setprecision(4);
    cout << "N[0] = " << N[0] << endl;
    for (int i = 1; i < 100; i++){
        N[i] = N[i-1]/2;
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}