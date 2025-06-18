#include <bits/stdc++.h>

using namespace std;

int main() {
    // vector -> vetor dinâmico (cresce ou diminui sob demanda)

    /*
    Construtor com 1 parâmetro, sendo este o tamanho inicial do vetor
    Todas as posições são inicializadas com o valor padrão do tipo
    int, float, double => 0
    */
    vector<int> v1(5);  
    for(int i = 0; i < 5; i++)
        cout << "v1[" << i << "] = " << v1[i] << endl;
    cout << endl;
    v1.push_back(-5);
    v1[0] = -5;

    for(int i = 0; i < v1.size(); i++)
        cout << "v1[" << i << "] = " << v1[i] << endl;
    cout << endl;

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

    /*
    
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