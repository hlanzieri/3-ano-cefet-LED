#include <bits/stdc++.h>

using namespace std;

void minusculo(char *str){
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

int main () {
    char str[201];
    cin.getline(str, 201);
    minusculo(str);
    cout << str << endl;
    return 0;
}