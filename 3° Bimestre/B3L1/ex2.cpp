#include <bits/stdc++.h>

using namespace std;

int main () {
    unsigned short qtsIdasFeira;
    cin >> qtsIdasFeira;
    while (qtsIdasFeira--) {
        unsigned short qtsProdutos;
        cin >> qtsProdutos;
        map<string, float> feira;
        for (unsigned short i = 0; i < qtsProdutos; i++) {
            string nome;
            float preco;
            cin >> nome >> preco;
            feira[nome] = preco;
        }
        unsigned short qtsProdutosDesejados;
        cin >> qtsProdutosDesejados;
        float somaPreco = 0;
        for (unsigned short i = 0; i < qtsProdutosDesejados; i++) {
            string fruta;
            unsigned short quantidade;
            cin >> fruta >> quantidade;
            auto it = feira.find(fruta);
            if (it != feira.end()){
                somaPreco += it->second * quantidade;
            }
        }

        cout << fixed << setprecision(2) << "R$ " << somaPreco << endl;
    }
    return 0;
}