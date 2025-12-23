// ALUNO: Humberto de Moraes Lanzieri Filho
// TURMA: 3° Informatica

#include <bits/stdc++.h>

using namespace std;

int main() {
    srand(time(0));
    int N, P;
    cout << "Informe N(7 a 100) e P(10 a 80): ";
    cin >> N >> P;

    char lab[101][101];

    // Geração do labirinto
    for (int l = 0; l < N; l++) {
        for (int c = 0; c < N; c++) {
            if (l == 0 || c == 0 || l == N-1 || c == N-1)
                lab[l][c] = '#';
            else
                lab[l][c] = (rand() % 100 < P) ? '#' : '.';
        }
    }

    // Posicionamento das laterais para entrada/saída
    int side_in = rand() % 4, side_out;
    int pos_in[2] = {0, 0}, pos_out[2] = {0, 0};

    // Definição das coordenadas de entrada
    if (side_in == 0) {
        pos_in[0] = 0;
        pos_in[1] = rand() % N;
    } else if (side_in == 1) {
        pos_in[0] = N - 1;
        pos_in[1] = rand() % N;
    } else if (side_in == 2) {
        pos_in[0] = rand() % N;
        pos_in[1] = 0;
    } else { // side_in == 3
        pos_in[0] = rand() % N;
        pos_in[1] = N - 1;
    }
    lab[pos_in[0]][pos_in[1]] = 'E';

    // Garante que saída não seja na mesma borda
    do {
        side_out = rand() % 4;
    } while (side_out == side_in);

    // Definição das coordenadas de saída
    if (side_out == 0) {
        pos_out[0] = 0;
        pos_out[1] = rand() % N;
    } else if (side_out == 1) {
        pos_out[0] = N - 1;
        pos_out[1] = rand() % N;
    } else if (side_out == 2) {
        pos_out[0] = rand() % N;
        pos_out[1] = 0;
    } else { // side_out == 3
        pos_out[0] = rand() % N;
        pos_out[1] = N - 1;
    }
    lab[pos_out[0]][pos_out[1]] = 'S';

    // Gravação no arquivo
    ofstream arquivo("lab.txt");
    for (int l = 0; l < N; l++) {
        for (int c = 0; c < N; c++) {
            arquivo << lab[l][c];
        }
        arquivo << "\n";
    }
    arquivo.close();

    cout << "\nArquivo lab.txt gerado com sucesso!\n";
    return 0;
}
