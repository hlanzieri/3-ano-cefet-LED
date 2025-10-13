#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, string> dicionario; // map ordenado
    for (int i = 0; i < N; i++) {
        string ingles, portugues;
        cin >> ingles >> portugues;
        dicionario[ingles] = portugues;
    }
    cin.ignore(); // descarta o '\n' pendente
    string frase_ingles;
    getline(cin, frase_ingles);
    stringstream ss(frase_ingles);
    string palavra;
    bool primeiro = true;
    while (ss >> palavra) {
        if (!primeiro) cout << " ";
        cout << dicionario[palavra];
        primeiro = false;
    }
    cout << endl;

    return 0;
}
