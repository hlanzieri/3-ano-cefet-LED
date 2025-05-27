#include <bits/stdc++.h>

using namespace std;

int main(){
    double M[12][12] = {0}, Soma = 0.0;
    int aux_menos = 5, aux_mais = 6;
    char O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
            //M[i][j] = i+j;
        }
    }

    for(int i = 7; i <= 11; i++){
        for(int j = aux_menos; j <= aux_mais; j++){
            Soma+= M[i][j];
        }
        aux_mais++;
        aux_menos--;
    }

    while(true){
        cin >> O;
        if(O == 'S'){
            cout << fixed << setprecision(1) << Soma << endl;
            break;
        } 
        if(O == 'M'){
            cout << fixed << setprecision(1) << Soma/30.0 << endl;
            break;
        }
    }
    return 0;
}