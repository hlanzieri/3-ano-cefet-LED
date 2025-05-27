#include <bits/stdc++.h>

using namespace std;

void roda_string(char *str){
    int len = strlen(str);
    if (len > 1) {
        char ultimo = str[len - 1];
        for (int i = len - 1; i > 0; i--) {
            str[i] = str[i - 1];
        }
        str[0] = ultimo;
    }
}

int main () {
    char str[201];
    cin.getline(str, 201);
    roda_string(str);
    cout << str << endl;
    return 0;
}