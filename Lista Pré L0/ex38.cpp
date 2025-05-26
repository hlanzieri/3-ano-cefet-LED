#include <bits/stdc++.h>

using namespace std;

void gerandonumeros(){
    srand(time(0)); 
    for(int i = 0; i < 100; i++){
        int numero = rand() % 31 -15;
        cout << numero << endl;
    }
}

int main () {
    gerandonumeros();
    return 0;
}