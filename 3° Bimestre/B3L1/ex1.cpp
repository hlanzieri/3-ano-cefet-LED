#include <bits/stdc++.h>

using namespace std;

int main () {
    int numPalavras, qtsCargos;
    cin >> numPalavras >> qtsCargos;
    map<string, double> cargos;
    for (int i = 0; i < numPalavras; i++) {
        string cargo;
        double comissao;
        cin >> cargo >> comissao;
        cargos[cargo] = comissao;
    }
    cin.ignore();
    while (qtsCargos--) {
        double qtsSalarioTotal = 0;
        while (true) {
            string texto;
            getline(cin, texto);
            if (texto == "."){
                break;
            }
            istringstream iss(texto);
            string palavra;
            while (iss >> palavra) {
                auto it = cargos.find(palavra);
                if (it != cargos.end()){
                    qtsSalarioTotal += it->second;
                }
            }
        }
        cout << fixed << setprecision(0) << qtsSalarioTotal << endl;
    }
    return 0;
}