#include <bits/stdc++.h>

using namespace std;

bool validar(const vector<string>& g, string& erro){
    if(g.empty()){ erro = "Arquivo vazio."; return false; }
    size_t cols = g[0].size();
    if(cols == 0){ erro = "Linha vazia."; return false; }
    for(size_t i=1;i<g.size();++i){
        if(g[i].size() != cols){
            erro = "Linhas com tamanhos diferentes na linha " + to_string(i+1) + ".";
            return false;
        }
    }
    size_t rows = g.size();
    for(size_t i=0;i<rows;++i){
        for(size_t j=0;j<cols;++j){
            char c = g[i][j];
            bool borda = (i==0 || i==rows-1 || j==0 || j==cols-1);
            if(borda){
                if(c!='#'){ erro = "Borda invalida em ("+to_string(i)+","+to_string(j)+")."; return false; }
            }else{
                if(c!='.'){ erro = "Interior invalido em ("+to_string(i)+","+to_string(j)+")."; return false; }
            }
        }
    }
    return true;
}

int main (){
    ifstream fin("labirinto.txt");

    if(!fin.is_open()){
        cout << "Nao foi possivel abrir labirinto.txt\n";
        return 0;
    }
    vector<string> g;
    string linha;
    while(getline(fin, linha)){
        g.push_back(linha);
    }
    fin.close();
    string erro;
    if(validar(g, erro)){
        cout << "Labirinto valido. Linhas=" << g.size() << " Colunas=" << (g.empty()?0:g[0].size()) << "\n";
    }else{
        cout << "Labirinto invalido: " << erro << "\n";
    }
    return 0;
}