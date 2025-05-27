#include <bits/stdc++.h>

using namespace std;

double Soma(int n){
    double Soma = 3, numerador = 2, denominador = 5;
    for (int i = 1; i <= n; i++){
        if(i % 2){
            Soma+=numerador/denominador;
        } else{
            Soma-=numerador/denominador;
        }
        numerador*=2;
        denominador+=2;
    }
    return Soma;
}

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << Soma(n) << endl;
    return 0;
}