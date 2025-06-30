#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int t = 0; t < T; t++) {
        string expressao;
        getline(cin, expressao);
        stack<char> pilha;
        int correto = 1;
        for (int i = 0; i < expressao.size(); i++) {
            char c = expressao[i];
            if (c == '(' || c == '[' || c == '{') {
                pilha.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (pilha.empty()) {
                    correto = 0;
                    break;
                }
                char topo = pilha.top();
                if ((c == ')' && topo == '(') ||
                    (c == ']' && topo == '[') ||
                    (c == '}' && topo == '{')) {
                    pilha.pop();
                } else {
                    correto = 0;
                    break;
                }
            }
        }
        if (correto && pilha.empty()) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}