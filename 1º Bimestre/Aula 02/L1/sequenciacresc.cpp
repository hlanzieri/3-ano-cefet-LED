#include <bits/stdc++.h>

using namespace std;

int main () {
    while(true){
        int X;
        cin >> X;
        if(X!=0){
            for(int i = 1; i <= X; i++){
                cout << i;
                if(i<X){
                    cout << " ";
                }
            }
        }
        else{
            break;
        }
        cout << endl;
    }
    return 0;
}