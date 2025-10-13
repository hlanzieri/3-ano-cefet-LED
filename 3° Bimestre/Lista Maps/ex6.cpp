#include <bits/stdc++.h>

using namespace std;

/*Faça um programa que receba do usuário o nome de um arquivo texto. Crie um outro
arquivo texto com o conteúdo do arquivo informado, porém alterando as letras minúsculas
para maiúsculas e vice-versa. Os demais caracteres deverão ser escritos no arquivo conforme
o original.*/

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
    char c;
    ofstream arquivo("saida.txt");
    if(!arquivo){
        cerr << "Erro ao abrir arquivo para leitura." << endl;
        return 1;
    }

    while(arqLeitura.get(c)){
    unsigned char uc = static_cast<unsigned char>(c); // correcao apontada pela AI
    if (islower(uc)) {
        c = toupper(uc);
    }
    else if (isupper(uc)) {
        c = tolower(uc);
    }
    arquivo << c;
    }

    arqLeitura.close();
    arquivo.close();
    return 0;
}