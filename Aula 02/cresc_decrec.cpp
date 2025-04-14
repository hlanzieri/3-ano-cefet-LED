#include <bits/stdc++.h>

using namespace std;

int main () {
    while(true){
        int X, Y;
        cin >> X >> Y;
        if(X>Y){
            cout << "Decrescente" << endl;
        }else if(X<Y){
            cout << "Crescente" << endl;
        }else{
        break;
        }
    }
    return 0;
}