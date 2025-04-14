#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;
    int X[N];
    for(int i=0; i<N; i++){
        cin >> X[i];
    }
    for(int i=0; i<N; i++){
        if(X[i] != 0){
        if(X[i] % 2 == 0){
            cout << "EVEN ";
        } else {
            cout << "ODD ";
        }
        if(X[i]>0){
            cout << "POSITIVE" << endl;
        } else if(X[i]<0){
            cout << "NEGATIVE" << endl;
    }
        } else {
            cout << "NULL" << endl;
        }

    }
    return 0;
}