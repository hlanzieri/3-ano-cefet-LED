#include <bits/stdc++.h>

using namespace std;

void sorteia(int &n) {
    srand(time(0)); 
    n = rand() % 100 + 1; // 1 a 100
}

int main () {
    int n = 0, palpite = 0, npalpites = 0;
    sorteia(n);
    cout << "Adivinhe o numero sorteado (entre 1 e 100): ";
    while(npalpites < 10) {
        cin >> palpite;
        npalpites++;
        if (palpite < n) {
            cout << "Menor! Tente novamente: ";
        } else if (palpite > n) {
            cout << "Maior! Tente novamente: ";
        } else {
            cout << "Parabens! Voce acertou o numero!" << endl;
            break;
        }
        if(npalpites == 10) {
            cout << "Numero maximo de palpites atingido! O computador ganhou o jogo." << endl;
            cout << "O numero era: " << n << endl;
        }
    }
    return 0;
}