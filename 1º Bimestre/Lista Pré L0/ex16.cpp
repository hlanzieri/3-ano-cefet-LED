#include <bits/stdc++.h>
using namespace std;

void min_max(int *vetor, int n, int *min, int *max){
    *min = vetor[0];
    *max = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] < *min) *min = vetor[i];
        if (vetor[i] > *max) *max = vetor[i];
    }
}

int main () {
    const int n = 30;
    vector<int> vetor(n);
    srand(time(0));
    cout << "Vetor aleatorio: ";
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 101 - 50; 
        cout << vetor[i] << " ";
    }
    cout << endl;

    int min = 0, max = 0;
    min_max(&vetor[0], n, &min, &max);
    cout << "Menor elemento: " << min << endl;
    cout << "Maior elemento: " << max << endl;
    return 0;
}