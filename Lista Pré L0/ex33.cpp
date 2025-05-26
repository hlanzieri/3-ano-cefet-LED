#include <bits/stdc++.h>

using namespace std;

typedef struct{
    char nome [51], sexo[15];
    int idade;
    double notas[4] = {0.0};
}Aluno;

void preencher(Aluno &aluno) {
    strcpy(aluno.nome, "Humberto");
    strcpy(aluno.sexo, "Masculino");
    aluno.idade = 17;
    aluno.notas[0] = 8.5;
    aluno.notas[1] = 7.0;
    aluno.notas[2] = 9.0;
    aluno.notas[3] = 6.5;
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
    return 0;
}