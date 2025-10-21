#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;
    cin.ignore();
    while (N--) {
        string linha;
        getline(cin, linha);
        istringstream iss(linha);
        set<string> itens;
        string item;
        while (iss >> item) {
            itens.insert(item);
        }
        bool primeiro = true;
        for (const auto& it : itens) {
            if (!primeiro) cout << " ";
            primeiro = false;
            cout << it;
        }
        cout << endl;
    }
    return 0;
}