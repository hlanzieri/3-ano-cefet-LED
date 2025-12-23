// ALUNO: Humberto de Moraes Lanzieri Filho
// TURMA: 3° Informatica

#include <bits/stdc++.h>

using namespace std;

int main() {
    int V=0, E=0;
    cin >> V >> E;

    // Matriz VxV iniciada com 0 (adjacências)
    vector<vector<int>> matriz(V, vector<int>(V, 0));

    // Preenchendo a matriz de adjacencias
    for (int q = 0; q < E; q++) {
        int X, Y;
        cin >> X >> Y;
        matriz[X][Y] = 1;
    }

    // Imprimindo a lista de adjacencias
    cout << "Listas de adjacencias:\n";
    for (int l = 0; l < V; l++) {
        cout << l << ": ";
        for (int c = 0; c < V; c++) {
            if (matriz[l][c] > 0) {
                cout << c << " ";
            }
        }
        cout << "\n";
    }

    // Imprimindo os graus referentes a cada vertice
    cout << "Graus:\n";
    for (int l = 0; l < V; l++) {
        int gs = 0, ge = 0;
        for (int c = 0; c < V; c++) gs += matriz[l][c];   // grau de saída
        for (int c = 0; c < V; c++) ge += matriz[c][l];   // grau de entrada
        cout << l << ": ge = " << ge << "; gs = " << gs << "\n";
    }

    return 0;
}
