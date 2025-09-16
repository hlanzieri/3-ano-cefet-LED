#include <bits/stdc++.h>

using namespace std;

//A: Está apresentando erro em tempo de execução

bool verificaCapicua(string frase){
    bool aviso = true;
    vector <int> segundaParte;
    int j = 0;
    for(int i = frase.size(); i >= 0; i--){
        if(frase[i] != '/' || frase[i] != ':' /*H: || frase[i] != ' '*/ ){    //A: E os espaços?
            segundaParte[j] = (frase[i]);
            j++;
        }
        else{
            break;  //A: Deveria somente ignorar ao invés de parar a estrutura de repetição
            //H: continue
        }
    }
    int aux = j;
    for(int i = 0; i < segundaParte.size(); i++){
        if(segundaParte[i] != segundaParte[aux] || aux < j/2){
            aviso = false;
            break;
        } 
        aux--;
    }
    return aviso;
}

int main(){
    string frase;
    bool flag;
    cout << "Insira uma frase:" << endl;
    getline(cin, frase);
    flag = verificaCapicua(frase);
    if(flag){
        cout << endl << "Sim";
    } else{
        cout << endl << "Não";
    }
    return 0;
}