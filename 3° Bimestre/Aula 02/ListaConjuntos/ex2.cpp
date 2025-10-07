#include <bits/stdc++.h>

using namespace std;

// Imprime elementos de um set em ordem decrescente
void imprimeDecresc(set <int> conjunto){
    vector<int> v(conjunto.begin(), conjunto.end());
   sort(v.begin(), v.end(), greater<int>());
    for(int c : v){
        cout << c << " ";
    }
    cout << endl;
}

int main () {
    set <int> conjunto;
    for(int i = 0; i < 35; i++){
        int num = rand() % 101 -50; // [-50,50]
        conjunto.insert(num);
    }
    imprimeDecresc(conjunto);
    return 0;
}