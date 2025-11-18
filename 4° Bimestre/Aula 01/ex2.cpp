#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string linha;
    ifstream fin("labirinto.txt");
    if(getline(fin, linha)){
        N = linha.length();
        cout << "N tem valor igual a: " << N << endl;
    }
    fin.close();
    return 0;
}