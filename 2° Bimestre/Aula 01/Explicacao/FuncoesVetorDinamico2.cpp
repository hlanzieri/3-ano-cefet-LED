#include <bits/stdc++.h>

using namespace std;

int main() {
    // vector -> vetor dinâmico (cresce ou diminui sob demanda)

    /*
    - Construtor com 2 parâmetro, sendo o primeiro o tamanho inicial do vetor
    e o segundo o valor de inicialização de cada posição
    - Todas as posições são inicializadas com o valor do segundo argumento
    */
    vector<int> v2(10, -1);
    for(int i = 0; i < v2.size(); i++) {
        v2[i] = i;
        cout << "v2[" << i << "] = " << v2[i] << endl;
    }
    cout << endl;

    v2.pop_back();
    for(int i = 0; i < v2.size(); i++)
        cout << "v2[" << i << "] = " << v2[i] << endl;
    cout << endl;

    cout << "v2.size() = " << v2.size() << endl;

    return 0;
}