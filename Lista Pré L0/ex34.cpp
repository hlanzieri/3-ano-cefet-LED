#include <bits/stdc++.h>

using namespace std;

typedef struct{
    char nome [51], sexo[15];
    int idade;
    double notas[4] = {0.0};
}Aluno;

void preencher(Aluno &aluno) {
    int i = 0;
    cout << "Digite o nome do aluno: ";
    cin.getline(aluno.nome, 51);
    cout << "Digite o sexo do aluno: ";
    cin.getline(aluno.sexo, 15);
    cout << "Digite a idade do aluno: ";
    cin >> aluno.idade;
    cout << "Digite as 4 notas do aluno: ";
    while(i < 4) {
        cin >> aluno.notas[i];
        if(aluno.notas [i] < 0 || aluno.notas[i] > 10) {
            cout << "Nota invalida. Digite novamente: ";
        } else{
            i++;
        }
    }
}

double calcular_media(const Aluno &aluno) {
    double soma = 0.0;
    for (int i = 0; i < 4; i++) {
        soma += aluno.notas[i];
    }
    return soma / 4.0;
}

int main () {
    Aluno aluno;
    preencher(aluno);
    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Sexo: " << aluno.sexo << endl;
    cout << "Notas: ";
    for (int i = 0; i < 4; i++) {
        cout << aluno.notas[i] << " ";
    }
    cout << endl;
    cout << "Media: " << calcular_media(aluno) << endl;
    return 0;
}