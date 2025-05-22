#include <bits/stdc++.h>
using namespace std;

int Primo(int n){
    int eh = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0) {
            eh = 0;
            break;
        }
    }
    return eh;
}

int main () {
    int n = 0, eh = 0;
    cin >> n;
    eh = Primo(n);
    if(eh == 1) {
        cout << "Eh primo" << endl;
    } else {
        cout << "Nao eh primo" << endl;
    }
    return 0;
}