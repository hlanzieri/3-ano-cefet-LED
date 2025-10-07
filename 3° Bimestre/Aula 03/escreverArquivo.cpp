#include <bits/stdc++.h>

using namespace std;

int main () {
    // Escrever os números no arquivo
    ofstream fout("cemNum.txt");
    
    if(fout.is_open()){
        for(int i = 1; i <= 100; i++){
            fout << i;
            fout << " "; // Espaço entre números, exceto no último
        }
        fout.close();
    }
    
    // Ler e imprimir o conteúdo do arquivo
    ifstream fin("cemNum.txt");
    
    if(fin.is_open()){
        int numero;
        cout << "Conteudo do arquivo:" << endl;
        while(fin >> numero){
            cout << numero << " ";
        }
        cout << endl;
        fin.close();
    }
    
    return 0;
}