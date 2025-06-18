#include <bits/stdc++.h>

using namespace std;

int main() {
    // vector -> vetor dinâmico (cresce ou diminui sob demanda)
    /* construtor padrão
        Cria um vector de determinado tipo com tamanho 0
    */
    vector<int> v;      
    for(int i = 1; i <= 3; i++)
        v.push_back(i); // Insere dados no fim do vector
    
    for(int i = 0; i < 3; i++)
        // Acessa a posição de índice i do vector
        cout << "v[" << i << "] = " << v[i] << endl;
    cout << endl;

    v[0] = -5; // Altera o valor da posição 0 para -5
    for(int i = 0; i < 3; i++)
        cout << "v[" << i << "] = " << v[i] << endl;
    cout << endl;

    return 0;
}