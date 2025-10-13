#include <bits/stdc++.h>
using namespace std;

int main () {
    string nomeArq;
    cout << "Insira o nome do arquivo de texto:" << endl;
    cin >> nomeArq;
    // abre o arquivo especificado
    ifstream arqLeitura(nomeArq);
    if(!arqLeitura){
        cerr << "Erro ao abrir arquivo para leitura." << endl;
        return 1;
    }
    // declaracao do map
    map<char, set<string>> palavrasPorLetra; 
    string palavraTemp;
    while (arqLeitura >> palavraTemp) {
        if (palavraTemp.empty()) continue;
        // converte a palavra para minúsculas para uniformizar comparação
        string palavraMinuscula;
        for (char c : palavraTemp) {
            palavraMinuscula += tolower(static_cast<unsigned char>(c));
        }
        char primeiraLetra = palavraMinuscula[0];
        palavrasPorLetra[primeiraLetra].insert(palavraMinuscula);
    }
    // Mostrar a contagem de palavras distintas que começam com cada letra
    for (auto& par : palavrasPorLetra) {
        cout << "Palavras que começam com a letra '" << par.first << "': " << par.second.size() << endl;
    }
    return 0;
}
