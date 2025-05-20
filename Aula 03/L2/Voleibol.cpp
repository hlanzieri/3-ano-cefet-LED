#include <bits/stdc++.h>
using namespace std;

int main (){
    int N = 0;
    cin >> N;
    char Nome[101][101];
    int S[101], B[101], A[101], S1[101], B1[101], A1[101];
    for (int i = 0; i < N; i++){
        cin >> Nome[i];
        cin >> S[i] >> B[i] >> A[i];
        cin >> S1[i] >> B1[i] >> A1[i];
    }
    // Soma total de tentativas e acertos
    int totalS = 0, totalB = 0, totalA = 0;
    int totalS1 = 0, totalB1 = 0, totalA1 = 0;
    for (int i = 0; i < N; i++){
        totalS += S[i];
        totalB += B[i];
        totalA += A[i];
        totalS1 += S1[i];
        totalB1 += B1[i];
        totalA1 += A1[i];
    }
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << (totalS1 * 100.0 / totalS) << " %." << endl;
    cout << "Pontos de Bloqueio: " << (totalB1 * 100.0 / totalB) << " %." << endl;
    cout << "Pontos de Ataque: " << (totalA1 * 100.0 / totalA) << " %." << endl;
    return 0;
}