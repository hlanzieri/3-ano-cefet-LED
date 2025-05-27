#include <bits/stdc++.h>

using namespace std;

void gerandonumeros(){
    srand(time(0)); 
    for(int i = 0; i < 50; i++){
        int numero = rand() % 51;
        cout << numero << endl;
    }
}

int main () {
    gerandonumeros();
    return 0;
}