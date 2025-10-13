#include <bits/stdc++.h>
using namespace std;

int main () {
    string nomeArq;
    cout << "Insira o nome do arquivo de texto:" << endl;
    cin >> nomeArq;
    // arquivo de texto deve estar na pasta output
    ifstream arqLeitura(nomeArq);
    if(!arqLeitura){
        cerr << "Erro ao abrir arquivo para leitura." << endl;
        return 1;
    }
    map<char, int> alfa;
    char c;
    while (arqLeitura.get(c)) {
        if (isalpha(c)) {
            c = tolower(c);
            alfa[c]++;
        }
    }
    for(auto& l : alfa){
        cout << "Letra " << l.first << " ocorre " << l.second << " vezes" << endl;
    }
    return 0;
}
