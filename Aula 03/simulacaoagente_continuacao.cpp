#include <bits/stdc++.h>
using namespace std;

void DesenharAmbiente (){
    int n = 1; // Define o tamanho do ambiente
    if(n>0){
    for(int i=1; i<=n; i++){
        cout << "+---";
    }
    cout << "+" << endl;
    for( int i = 1; i <= n; i++){
        cout << "|   ";
    }
    cout << "|" << endl;
    for(int i=1; i<=n; i++){
        cout << "+---";
    }
    cout << "+" << endl;
    } 
}

int main (){
    DesenharAmbiente();
    return 0;
}
