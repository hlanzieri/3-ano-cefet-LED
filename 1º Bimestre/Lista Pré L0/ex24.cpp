#include <bits/stdc++.h>

using namespace std;

void string_oposta(char *str){
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + ('z' - str[i]);
        }
    }
}

int main () {
    char str[201];
    cin.getline(str, 201);
    string_oposta(str);
    cout << str << endl;
    return 0;
}