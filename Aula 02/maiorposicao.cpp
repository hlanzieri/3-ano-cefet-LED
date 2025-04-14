#include <bits/stdc++.h>

using namespace std;

int main () {
    int N[100];
    for(int i=0; i<100; i++){
        cin >> N[i];
    }
    int maior = N[0];
    int posicao = 0;
    for(int i=1; i<100; i++){
        if(N[i] > maior){
            maior = N[i];
            posicao = i;
        }
    }
    cout << maior << endl;
    cout << posicao+1 << endl;
    return 0;
}