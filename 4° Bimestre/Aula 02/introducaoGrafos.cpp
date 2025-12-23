/*
Crie um programa para receber a quantidade de vértices.
Imprima a matriz de adjacências do grafo. Leia a 
quantidade de arestas e o valor de cada aresta u->v.
Imprima novamente a matriz de adjacências.
*/

#include <bits/stdc++.h>

using namespace std;

int main () {
    int V;
    cout << "Entre com o numero de vertices:";
    cin >> V;

    // Matriz adjacencias
    int M[V][V];
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            M[i][j] = 0;
        }
    }
    // Impressao da matriz adjacencia
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    int E = 0;
    cout << "Entre com a quantidade de arestas:";
    cin >> E;
    
    int u, v;
    for(int e = 0; e < E; e++){
        cin >> u >> v;
        M[u][v] = 1;
    }
    // Leitura de arestas
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}