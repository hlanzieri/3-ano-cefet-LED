#include <bits/stdc++.h>

using namespace std;

int main(){
    string frase;
    int flag = 0;
    cout << "Insira uma frase: " << endl;
    getline(cin, frase);
    cout << endl;
    for(int i = 0; i < frase.size(); i++){
        //A: Poderia ser => frase[i] >= 'A' && frase[i] <= 'Z'
        if(int(frase[i]) >= 65 && int(frase[i]) <= 90){ // está entre 65 e 90
            tolower(frase[i]);
        } else if(int(frase[i] >= 97 && int(frase[i]) <= 122)){
            toupper(frase[i]);
        } else{ if(frase[i] == ' ' && frase[i] == '\n' ){ //A: Deveria ser ||
            if(flag % 2 != 0){
            stack <char> pilha;
            for(int j = 0; j < i; j++){
                pilha.push(frase[j]);   //A: Não está alterando a caixa do texto
            }
            while(!pilha.empty()){
                cout << pilha.top();
                pilha.pop();
            }
            } else{
                for(int j = 0; j < i; j++){
                    cout << frase[j];
                }
                cout << " ";
            }
            flag++;
        }
        }
        
    }
}