#include <bits/stdc++.h>
using namespace std;

int main (){
    double A[100] = {0};
    for(int i=0; i<100; i++){
        cin >> A[i];
    }
    for(int i=0; i<100; i++){
        if(A[i]<=10){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    return 0;
}