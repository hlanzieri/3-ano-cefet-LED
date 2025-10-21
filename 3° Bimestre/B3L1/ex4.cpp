#include <bits/stdc++.h>

using namespace std;

int main () {
    int T;
    cin >> T;
    while (T--) {
        int M, N;
        cin >> M >> N;
        cin.ignore();

        map<string, string> dicionario;
        for (int i = 0; i < M; ++i) {
            string japones, portugues;
            getline(cin, japones);
            getline(cin, portugues);
            dicionario[japones] = portugues;
        }

        for (int i = 0; i < N; ++i) {
            string linha, palavra;
            getline(cin, linha);
            istringstream iss(linha);
            bool primeiro = true;
            while (iss >> palavra) {
                if (!primeiro) cout << " ";
                primeiro = false;
                auto it = dicionario.find(palavra);
                cout << (it != dicionario.end() ? it->second : palavra);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}