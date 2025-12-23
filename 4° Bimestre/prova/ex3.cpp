#include <bits/stdc++.h>

using namespace std;

int main () {
    string nomeArquivo;
    cout << "Digite o nome do arquivo do labirinto: ";
    cin >> nomeArquivo;
    ifstream arqLeitura(nomeArquivo);
    vector<string> labirinto;
    string linha;
    while (getline(arqLeitura, linha)) {
        labirinto.push_back(linha);
    }
    arqLeitura.close();

    // Validação: número de linhas e colunas
    int numLinhas = labirinto.size();
    int numColunas = labirinto.empty() ? 0 : labirinto[0].size();
    bool valido = true;
    char permitidos[] = {'#', '.', 'S', 'E', ' '};
    int nPermitidos = 5;
    for (int i = 0; i < numLinhas; i++) {
        if ((int)labirinto[i].size() != numColunas) {
            valido = false;
        }
        for (char c : labirinto[i]) {
            bool achou = false;
            for (int j = 0; j < nPermitidos; j++) {
                if (c == permitidos[j]) {
                    achou = true;
                    break;
                }
            }
            if (!achou) {
                valido = false;
            }
        }
    }
    if (valido) {
        cout << labirinto.size() << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}