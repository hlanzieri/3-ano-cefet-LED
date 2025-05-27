#include <bits/stdc++.h>

using namespace std;

void Separa(float n, int **inteira, float **frac) {
    *inteira = (int *)malloc(sizeof(int));
    *frac = (float *)malloc(sizeof(float));
    **inteira = (int)n;
    **frac = n - **inteira;
}
int main () {
    float n = 0;
    int *inteira = 0;
    float *frac = 0;
    cin >> n;
    Separa(n, &inteira, &frac);
    cout << "Parte inteira: " << *inteira << endl;
    cout << "Parte fracionaria: " << *frac << endl;
    return 0;
}