#include <bits/stdc++.h>

using namespace std;

int main () {
    string expressao;


    while(cin >> expressao){
        stack<char>pilha;
        bool correto = true;
        int i = 0;
        char c;
        while((c = expressao[i]) != '\0'){
            if(c == '('){
                pilha.push(')');
            } else if(c == ')'){
                if(!pilha.empty()){
                    pilha.pop();
                } else{
                    correto = false;
                    break;
                }
            }
            i++;
        }
        if(correto && pilha.empty()){
            cout << "correct" << endl;
        } else{
            cout << "incorrect" << endl;
        }
    }

    return 0;
}