#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequencia;
    while (getline(cin, sequencia)) {
        int flag = 0;
        for (int i = 0; i < sequencia.size(); i++) {
            if (sequencia[i] != ' ') {
                if (flag % 2 == 0)
                    sequencia[i] = toupper(sequencia[i]);
                else
                    sequencia[i] = tolower(sequencia[i]);
                flag++;
            }
        }
        cout << sequencia << endl;
    }
    return 0;
}