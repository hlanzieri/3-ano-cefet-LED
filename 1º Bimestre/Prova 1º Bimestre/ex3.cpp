#include <bits/stdc++.h>

using namespace std;

void desenharambiente(){
    int aux = 1;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < aux; j++){
            cout << "*";
        }
        cout << endl;
        if(i < 4){ 
            aux+=2;
        } else{
            aux-=2;
        }
    }
}

int main(){
    desenharambiente();
    return 0;
}