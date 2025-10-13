#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> materias_contagem;
    for (int i = 0; i < N; i++) {
        int materia;
        cin >> materia;
        materias_contagem[materia]++; // conta ocorrência 
    }
    // O número de assuntos distintos é a quantidade de chaves no mapa
    cout << (int)materias_contagem.size() << endl;
    return 0;
}
