#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("labirinto.txt");
    string linha;

    if (fin.is_open()) {
        cout << endl << "Conteudo do arquivo labirinto.txt:" << endl;
        while (getline(fin, linha)) {
            cout << linha << endl; 
        }
        fin.close();
    }
    return 0;
}
