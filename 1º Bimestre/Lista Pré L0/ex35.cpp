#include <bits/stdc++.h>

using namespace std;

void gerandonumeros(){
    srand(time(0)); 
    for(int i = 0; i < 30; i++){
        int numero = rand() % 11;
        cout << numero << endl;
    }
}

int main () {
    gerandonumeros();
    return 0;
}