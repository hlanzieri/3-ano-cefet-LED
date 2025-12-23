#include <bits/stdc++.h>

using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    // Matriz de adjacência inicializada com 0
    vector<vector <int>> matriz;

    // Leitura das arestas
    for (int i = 0; i < E; i++) {
        int X, Y;
        cin >> X >> Y;
        matriz[X][Y] = 1;
    }

    // Exibir listas de adjacências
    cout << "Listas de adjacências:" << endl;
    for (int i = 1; i <= V; i++) {
        cout << i << ": ";
        for (int j = 1; j <= V; j++) {
            if (matriz[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Cálculo dos graus
    cout << endl << "Graus:" << endl;
    for (int i = 1; i <= V; i++) {
        int gs = 0, ge = 0;
        // Grau de saída
        for (int j = 1; j <= V; j++) {
            gs += matriz[i][j];
        }
        // Grau de entrada
        for (int j = 1; j <= V; j++) {
            ge += matriz[j][i];
        }
        cout << i << ": ge = " << ge << "; gs = " << gs << endl;
    }

    return 0;
}