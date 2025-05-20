#include <bits/stdc++.h>
using namespace std;

int main (){
    int V, N[10];
    cin >> V;
    N[0] = V;
    for(int i = 0; i < 10; i++){
        if(i > 0) N[i] = N[i-1] * 2;
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}