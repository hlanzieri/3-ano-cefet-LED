#include <bits/stdc++.h>

using namespace std;

/* =========================
   AULA 15 - ORDENAÇÃO
========================= */
void ordenarVetor() {
    vector<int> v = {5, 2, 9, 1, 3};
    sort(v.begin(), v.end());

    cout << "Vetor ordenado: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

/* =========================
   AULA 17 - SET
========================= */
void exemplosSet() {
    vector<int> v = {1, 2, 2, 3, 4, 4, 5};

    set<int> s(v.begin(), v.end());

    cout << "Elementos distintos: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    cout << "Quantidade de elementos unicos: " << s.size() << endl;

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    set<int> uniao, intersecao;

    for (int x : a) uniao.insert(x);
    for (int x : b) uniao.insert(x);

    for (int x : a)
        if (find(b.begin(), b.end(), x) != b.end())
            intersecao.insert(x);

    cout << "Uniao: ";
    for (int x : uniao) cout << x << " ";
    cout << endl;

    cout << "Intersecao: ";
    for (int x : intersecao) cout << x << " ";
    cout << endl;
}

/* =========================
   AULA 18 - MAP
========================= */
void exemplosMap() {
    vector<int> v = {1, 2, 2, 3, 3, 3};
    map<int, int> freq;

    for (int x : v)
        freq[x]++;

    cout << "Frequencia dos numeros:\n";
    for (auto p : freq)
        cout << p.first << " -> " << p.second << endl;
}

/* =========================
   AULA 18 - ARQUIVOS
========================= */
void manipulacaoArquivo() {
    ofstream arquivo("dados.txt");

    arquivo << "Tecnico em Informatica\n";
    arquivo << "Estruturas de Dados\n";

    arquivo.close();

    ifstream leitura("dados.txt");
    string linha;

    cout << "Conteudo do arquivo:\n";
    while (getline(leitura, linha))
        cout << linha << endl;

    leitura.close();
}

/* =========================
   AULA 19 - LABIRINTO
========================= */
void labirinto() {
    const int N = 5;
    char lab[N][N] = {
        {'#', '#', '#', '#', '#'},
        {'#', ' ', ' ', '#', '#'},
        {'#', ' ', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#'}
    };

    cout << "Labirinto:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << lab[i][j];
        cout << endl;
    }
}

/* =========================
   AULA 20 - GRAFOS
========================= */
void grafoSimples() {
    map<int, vector<int>> grafo;

    grafo[1] = {2, 3};
    grafo[2] = {1, 4};
    grafo[3] = {1};
    grafo[4] = {2};

    cout << "Representacao do grafo:\n";
    for (auto p : grafo) {
        cout << "Vertice " << p.first << ": ";
        for (int v : p.second)
            cout << v << " ";
        cout << endl;
    }
}

/* =========================
   MENU PRINCIPAL
========================= */
int main() {
    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Ordenacao\n";
        cout << "2 - Estrutura SET\n";
        cout << "3 - Estrutura MAP\n";
        cout << "4 - Arquivos texto\n";
        cout << "5 - Labirinto\n";
        cout << "6 - Grafos\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: ordenarVetor(); break;
            case 2: exemplosSet(); break;
            case 3: exemplosMap(); break;
            case 4: manipulacaoArquivo(); break;
            case 5: labirinto(); break;
            case 6: grafoSimples(); break;
            case 0: cout << "Encerrando...\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);

    return 0;
}
