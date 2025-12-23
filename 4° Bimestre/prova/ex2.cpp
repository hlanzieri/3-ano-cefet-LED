#include <bits/stdc++.h>

using namespace std;

int main () {
    srand(time(0));
    // a)
    ofstream arquivo_saida_A("A.txt");
    for(int i = 0; i < 20; i++){
        int x = rand()% 31 - 15;
        arquivo_saida_A << x << " ";
    }
    arquivo_saida_A.close();
    // b)
    ofstream arquivo_saida_B("B.txt");
    for(int i = 0; i < 20; i++){
        int x = rand()% 25 - 12;
        arquivo_saida_B << x << " ";
    }
    arquivo_saida_B.close();
    // c)
    vector<int> vetor;
    ifstream arquivo_entrada_A("A.txt");
    int num;
    for(int i = 0; i < 20; i++){
        arquivo_entrada_A >> num;
        vetor.push_back(num);
    }
    arquivo_entrada_A.close();
    ifstream arquivo_entrada_B("B.txt");
    for(int i = 0; i < 20; i++){
        arquivo_entrada_B >> num; // >> ignora espaços, linhas em branco ou tabulações 
        vetor.push_back(num); // insere-se apenas um numero inteiro no vetor
    }
    arquivo_entrada_B.close();

    // d)
    // Inserindo os numeros do vetor dentro do set em ordem decrescente
    set<int, greater<int>> distintos;
    for (int v : vetor) {
        distintos.insert(v);
    }
    cout << endl << "Numeros distintos em ordem decrescente:" << endl;
    for (int v : distintos) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}