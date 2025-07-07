#include <bits/stdc++.h>
using namespace std;

void inverteVetor(vector<int> &vetor) {
    stack<int> pilha;
    // Coloca os elementos do vetor na pilha
    for (int i = 0; i < vetor.size(); i++) {
        pilha.push(vetor[i]);
    }
    // Retira da pilha e coloca de volta no vetor (invertendo)
    for (int i = 0; i < vetor.size(); i++) {
        vetor[i] = pilha.top();
        pilha.pop();
    }
}

int main () {
    vector<int> vetor;
    srand(time(0));
    for(int i = 0; i < 20; i++){
        vetor.push_back(rand() % 101 - 50);
    }

    inverteVetor(vetor);

    cout << "Vetor invertido: ";
    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}