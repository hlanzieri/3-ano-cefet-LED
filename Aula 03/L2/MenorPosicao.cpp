#include <bits/stdc++.h>
using namespace std;

int main (){
    int N = 0, menor = 0, pmenor = 0;
    cin >> N;
    int X[N] = {0};
    for(int i=0; i<N; i++){
        cin >> X[i];
        if(i == 0){
            menor = X[i];
            pmenor = i;
        } else {
            if(X[i] < menor){
                menor = X[i];
                pmenor = i;
            }
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pmenor << endl;
    return 0;
}