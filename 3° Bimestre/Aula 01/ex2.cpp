#include <bits/stdc++.h>

using namespace std;

int main () {
    vector <int> A, B;
    srand(time(0));
    cout << "VECTOR A: " << endl;
    for(int i = 0; i < 20; i++){
        A.push_back(rand()% 30 + 1);
        cout << A.back() << " ";
    }
    cout << endl << "VECTOR B:" << endl;
    for(int i = 0; i < 20; i++){
        B.push_back(rand()% 30 + 1);
        cout << B.back() << " ";
    }
    cout << endl;
    // União
    cout << "Uniao entre os dois vetores: A e B" << endl;
    set <int> uniao;
    for(int a : A){
        uniao.insert(a);
    }
    for(int b : B){
        uniao.insert(b);
    }
    for(int u : uniao){
        cout << u << " ";
    }
    cout << endl;
    
    // Interseção
    cout << "Intersecao entre os dois vetores: A e B" << endl;
    set <int> intersecao;
    for(int i = 0; i < 20; i++){
        if(find(B.begin(), B.end(), A[i]) != B.end()){
            intersecao.insert(A[i]);
        }
    }
    for(int inter : intersecao){
        cout << inter << " ";
    }
    cout << endl;
    
    return 0;
}