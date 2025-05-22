#include <bits/stdc++.h>

using namespace std;

void PadraoUm(){
    cout << "Padrao 1" << endl;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void PadraoDois(){
    cout << "Padrao 2" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void PadraoTres(){
    cout << "Padrao 3" << endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void PadraoQuatro(){
    cout << "Padrao 4" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void PadraoCinco(){
    cout << "Padrao 5" << endl;
    int aux = 1, nesp = 4;
    for (int i = 0; i < 5; i++){
        for(int k = 0; k < nesp; k++){
            cout << " ";
        }
        for(int j = 0; j < aux; j++){
            cout << "*";
        }
        aux+=2;
        nesp--;
        cout << endl;
    }
}

void PadraoSeis(){
    cout << "Padrao 6" << endl;
    int aux = 9, nesp = 0;
    for (int i = 0; i < 5; i++){
        for(int k = 0; k < nesp; k++){
            cout << " ";
        }
        for(int j = 0; j < aux; j++){
            cout << "*";
        }
        aux-=2;
        nesp++;
        cout << endl;
    }
}

int main () {
    PadraoUm();
    PadraoDois();
    PadraoTres();
    PadraoQuatro();
    PadraoCinco();
    PadraoSeis();
    return 0;
}