#include <bits/stdc++.h>

using namespace std;

// Recebe um vetor de inteiros e o preenche com os valores lidos do teclado
void recebeVetor (vector <string> &V){
    for(int i = 0; i < V.size(); i++){
        cin >> V[i];
    }
}

// Função que calcula e imprime a quantidade de LEDs necessários para cada número
void printaLeds (vector <string> &V){
    for (int i = 0; i < V.size(); i++) {
        int valor = 0;
        for (int j = 0; j < V[i].size(); j++) {
            if(V[i][j] == '1'){
                valor += 2;
            } 
            if(V[i][j] == '2'){
                valor += 5;
            }
            if(V[i][j] == '3'){
                valor += 5;
            }
            if(V[i][j] == '4'){
                valor += 4;
            }
            if(V[i][j] == '5'){
                valor += 5;
            }
            if(V[i][j] == '6'){
                valor += 6;
            }
            if(V[i][j] == '7'){
                valor += 3;
            }
            if(V[i][j] == '8'){
                valor += 7;
            }
            if(V[i][j] == '9'){
                valor += 6;
            }
            if(V[i][j] == '0'){
                valor += 6;
            }
        }
        cout << valor << " leds" << endl;
    }
}

int main () {
    int N = 0;
    cin >> N;
    vector <string> V(N);
    recebeVetor(V);
    printaLeds(V);
    return 0;
}