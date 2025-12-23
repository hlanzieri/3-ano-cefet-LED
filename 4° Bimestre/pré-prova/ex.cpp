#include <bits/stdc++.h>

using namespace std;

int M[101][101] = {0}; 

void exibir(int V){
    
    int l=0;
    
    for(l=0; l<V; l++){
        
        cout << l << ": ";
        
        for(int c=0; c<V; c++){
            
            if(M[l][c] == 1){
                
                cout << c << " ";
                
            }
            
        }
        
        cout << "\n";
        
    }
    
}

void busca_largura(int V, int v_inicial){
    
    queue<int> F;
    vector<int> visitado(V, 0);

    visitado[v_inicial] = 1;
    F.push(v_inicial);

    while (!F.empty()) {
        int u = F.front(); F.pop();
        cout << u << " ";

        for (int v = 0; v < V; v++) {
            if (M[u][v] == 1 && !visitado[v]) {
                visitado[v] = 1;
                F.push(v);
            }
        }
    }
}

void busca_profundidade(int V, int v_inicial) {
    stack<int> P;
    vector<int> visitado(V, 0);

    visitado[v_inicial] = 1;
    P.push(v_inicial);

    while (!P.empty()) {
        int u = P.top(); P.pop();
        cout << u << " ";

        for (int v = V - 1; v >= 0; v--) {
            if (M[u][v] == 1 && !visitado[v]) {
                visitado[v] = 1;
                P.push(v);
            }
        }
    }
}

int main(){
    
    int V, A, l=0, c=0, u=0, v=0;
    
    cin >> V >> A;

    for(l = 0; l < A; l++){
        
        cin >> u >> v;
        
        M[u][v] = 1;
        
        M[v][u] = 1;
        
    }

    exibir(V);

    cout << "DFS: ";
    busca_profundidade(V, 0);

    cout << "\nBFS: ";
    busca_largura(V, 0);

    return 0;
}