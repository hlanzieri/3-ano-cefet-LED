#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int>X(2001, 0);
    int N = 0, v = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> v;
        X[v]++; 
    }
    for(int i = 0; i <= 2001; i++){
        if(X[i] > 0){
            cout << i << " aparece " << X[i] << " vez(es)" << endl;
        }
    }


    return 0;
}