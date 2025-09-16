// PROVA DE LED DE HUMBERTO DE MORAES LANZIERI FILHO - 3° INFORMÁTICA
#include <bits/stdc++.h>

using namespace std;

void exibeFila(queue <int> *fila){ 
    queue <int> temp = *fila;
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
}

int numPares(queue <int> *fila){
    queue <int> temp = *fila;
    int qtd = 0;
    while(!temp.empty()){
        if(temp.front() % 2 == 0){
            qtd++;
        }
        temp.pop();
    }
    return qtd;
}

void inverteFila(queue <int> *fila){
    queue <int> temp = *fila;
    stack <int> invertida;
    while(!temp.empty()){
        invertida.push(temp.front());
        temp.pop();
    }
    while(!invertida.empty()){
        cout << invertida.top() << " ";
        invertida.pop();
    }
}

int main(){
    queue <int> fila;
    int N = 0;
    while(true){
        cout << endl << "Insira o valor de N:" << endl;
        cin >> N;
        if( N >= 10 && N <= 30){
            break;
        }
    }
    srand(time(0));
    cout << endl;
    for(int i = 0; i < N; i++){
        // GERAR VALORES DE -30 a 50
        fila.push(rand() % 80 - 29); // REVISAR     //A: Deveria ser 81
    }
    cout << "MOSTRAR CONTEUDO FILA" << endl;
    exibeFila(&fila);
    int num = numPares(&fila);
    cout << endl << "NUMERO DE IMPARES" << endl;
    cout << "O numero de impares presentes na fila é " <<  N - num;
    cout << endl << "FILA INVERTIDA" << endl;
    inverteFila(&fila);
    return 0;
}