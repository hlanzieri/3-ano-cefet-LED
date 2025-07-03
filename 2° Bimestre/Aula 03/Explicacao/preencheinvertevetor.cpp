#include <bits/stdc++.h>

using namespace std;

void declaraVetor(vector<int> &v){
    srand(time(0));
    // Sorteando e printando o vetor
    for(int i = 0; i < 20; i++){
        v.push_back(rand() % 39 - 15); 
        cout << v[i] << " ";
    }
    cout << endl;
}

void inverteVetor(vector<int> &v){
    // Invertendo os valores entre as posições inversas
    int aux = 19;
    for(int i = 0; i < 10; i++){
        swap(v[i], v[aux]);
        aux--;
    }
}

void printaVetorInvertido(const vector<int> &v){
    // Printando o vetor novo
    for(int i = 0; i < 20; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main () {
    vector <int> v;
    declaraVetor(v);
    inverteVetor(v);
    printaVetorInvertido(v);
    return 0;
}