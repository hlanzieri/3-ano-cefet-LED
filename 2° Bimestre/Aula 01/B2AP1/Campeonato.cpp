#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> X(17);
    int poskung = 0, poslu = 0;
    for(int i = 1; i <= 16; i++) {
        cin >> X[i];
        if(X[i] == 1){ 
            poskung = i;
        }
        if(X[i] == 9) {
            poslu = i;
        }
    }

    poskung--;
    poslu--;
    int rodada = 1;
    while (poskung/2 != poslu/2) {
        poskung /= 2;
        poslu /= 2;
        rodada++;
    }
    if (rodada == 1){
        cout << "oitavas" << endl;
    } else if (rodada == 2) {
        cout << "quartas" << endl;
    } else if (rodada == 3) {
        cout << "semifinal" << endl;
    } else {
        cout << "final" << endl;
    }
    return 0;
}