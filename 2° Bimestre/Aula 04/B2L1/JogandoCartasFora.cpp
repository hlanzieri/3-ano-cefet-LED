#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    while(cin >> n && n != 0) {
        // Criamos uma fila para as cartas e um vetor para as descartadas
        queue<int> cartas;
        vector<int> cartasDescartadas;
        // Preenchemos a fila com as cartas de 1 a n
        for(int i = 1; i <= n; i++) {
            cartas.push(i);
        }
        // Enquanto houver mais de uma carta, descartamos a do topo e movemos a próxima para o final, de 2 em 2
        while(cartas.size() > 1) {
            // Guarda a carta do topo (descartada)
            cartasDescartadas.push_back(cartas.front());
            cartas.pop();
            // Move a próxima carta para o final da fila
            cartas.push(cartas.front());
            cartas.pop();
        }
        // Imprime as cartas descartadas
        cout << "Discarded cards:";
        if (!cartasDescartadas.empty()) {
            cout << " ";
            for (size_t i = 0; i < cartasDescartadas.size(); ++i) {
                cout << cartasDescartadas[i];
                if (i != cartasDescartadas.size() - 1) cout << ", ";
            }
        }
        cout << endl;
        // Imprime a carta restante
        cout << "Remaining card: " << cartas.front() << endl;
    }
    return 0;
}