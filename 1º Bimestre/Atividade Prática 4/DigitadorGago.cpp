#include <bits/stdc++.h>

using namespace std;

// Função para corrigir uma palavra
string corrigePalavra(const string & palavra) {
    if (palavra.length() < 4) return palavra; // Não pode ter repetição

    // Verifica se as duas primeiras sílabas (2 letras cada) são iguais
    if (palavra.substr(0, 2) == palavra.substr(2, 2)) {
        // Remove a repetição da primeira sílaba
        return palavra.substr(2);
    }
    return palavra;
}

int main() {
    string linha;
    getline(cin, linha);

    istringstream iss(linha);
    string palavra;
    bool primeiro = true;

    while (iss >> palavra) {
        // Corrige a palavra se necessário
        string corrigida = palavra;
        // Procura por repetição apenas se a palavra tem pelo menos 4 letras
        if (palavra.length() >= 4) {
            // Se as duas primeiras sílabas (2 letras) são iguais
            if (palavra.substr(0, 2) == palavra.substr(2, 2)) {
                corrigida = palavra.substr(2);
            }
        }
        if (!primeiro) cout << " ";
        cout << corrigida;
        primeiro = false;
    }
    cout << endl;
    return 0;
}