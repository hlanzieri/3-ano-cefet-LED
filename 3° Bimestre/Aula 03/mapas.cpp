#include <bits/stdc++.h>

using namespace std;

int main () {
    map<char, int> mapa;
    mapa['a'] = 5;
    mapa['i'] = 2;
    mapa['k'] = 3;
    
    if(mapa.find('a') != mapa.end()){
        cout << "Chave encontrada\n";
        cout << "a: " << mapa['a'] << endl;
    } else{
        cout << "Chave NAO encontrada\n";
        cout << "b: " << mapa['b'] << endl;
    }

    for(auto p : mapa){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}