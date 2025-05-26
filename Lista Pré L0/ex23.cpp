#include <bits/stdc++.h>

using namespace std;

void shift_string(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z')) {
            str[i] = str[i] + 1;
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        } else if (str[i] == 'z') {
            str[i] = 'a';
        }
    }
}

int main () {
    char str[201];
    cin.getline(str, 201);
    shift_string(str);
    cout << str << endl;
    return 0;
}