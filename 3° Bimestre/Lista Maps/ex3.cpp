#include <bits/stdc++.h>
using namespace std;

void imprimeMap(map<int, int> &par){
    for(auto &p : par){
        cout << p.first << ": " << p.second << ", ";
    }
}

int main () {
    int N = 0;
    while(N < 5 || N > 50){
        cout << "Insira o valor de N (5 a 50): ";
        cin >> N;
    }
    srand(time(0));
    map<int, int> par;
    for(int i = 0; i < N; i++){
        int x = rand() % 51 - 25; 
        par[x]++;
    }
    cout << endl;
    imprimeMap(par);
    return 0;
}
