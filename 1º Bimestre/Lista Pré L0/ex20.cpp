#include <bits/stdc++.h>

using namespace std;

int conta_vogais(char *str) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cont++;
        }
    }
    return cont;
}

int main () {
    char str[201];
    cin.getline(str, 201);
    cout << "Numero de vogais: " << conta_vogais(str) << endl;
    return 0;
}