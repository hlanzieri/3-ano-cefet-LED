#include <bits/stdc++.h>

using namespace std;

int validarArquivo(string nomeArquivo){
    ifstream arqLeitura(nomeArquivo); // abre o arquivo
    if(!arqLeitura.is_open()){ // verifica se o arquivo com o labirinto foi aberto
        cerr << endl << "Arquivo nao encontrado";
        return 1;
    }
    vector <string> labirinto;
    string linha;
    while (getline(arqLeitura, linha)) { // getline(cin, linha)
        labirinto.push_back(linha);
    }
    arqLeitura.close();

    // Validação: número de linhas e colunas
    int numLinhas = labirinto.size();
    int numColunas = labirinto[0].size();
    vector <char> permitidos = {'#', '.', 'S', 'E'};
    for (int i = 0; i < numLinhas; i++) {
        if (labirinto[i].size() != numColunas) {
            return -1;
        }
        for (char c : labirinto[i]) {
            bool achou = false;
            for (int j = 0; j < permitidos.size(); j++) {
                if (c == permitidos[j]) {
                    achou = true;
                    break;
                }
            }
            if (!achou) {
                return -1;
            }
        }
    }
    return labirinto.size();
}

int main () {
    string nomeArquivo;
    cout << "Digite o nome do arquivo do labirinto: ";
    cin >> nomeArquivo;
    cout << validarArquivo(nomeArquivo);
    return 0;
}
