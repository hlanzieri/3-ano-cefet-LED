#include <bits/stdc++.h>

using namespace std;

int conta_char(char *str, char c) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            cont++;
        }
    }
    return cont;
}

int main () {
    char str[201], c;
    cin.getline(str, 201);
    cin >> c;
    cout << "O caractere '" << c << " aparece " << conta_char(str, c) << " vezes na string." << endl;
    return 0;
}