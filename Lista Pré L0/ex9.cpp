#include <bits/stdc++.h>
using namespace std;

void soma(int a, int b, int *ret) {
    *ret = a + b;
}

int main () {
    int a = 0, b = 0, ret = 0;
    cin >> a >> b;
    soma(a, b, &ret);
    cout << ret << endl;
    return 0;
}