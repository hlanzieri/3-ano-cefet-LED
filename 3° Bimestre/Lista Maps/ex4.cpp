#include <bits/stdc++.h>
using namespace std;

int main () {
    int N = 0;
    while(N < 15 || N > 50){
        cout << "Insira um numero entre 15 e 50: ";
        cin >> N;
    }
    srand(time(0));
    ofstream arquivo("numeros.txt");
    if (!arquivo) {
        cerr << "Erro ao abrir arquivo para escrita." << endl;
        return 1;
    }
    for(int i = 0; i < N; i++){
        int x = rand() % 51 - 25;
        arquivo << x;
        if (i < N - 1)
            arquivo << " "; // espaço entre números
    }
    arquivo.close();
    // Abrir arquivo para leitura
    ifstream arqLeitura("numeros.txt");
    if (!arqLeitura) {
        cerr << "Erro ao abrir arquivo para leitura." << endl;
        return 1;
    }
    // Ler e exibir conteúdo do arquivo
    string linha;
    getline(arqLeitura, linha);
    cout << "Conteudo do arquivo numeros.txt:" << endl;
    cout << linha << endl;
    arqLeitura.close();
    return 0;
}
