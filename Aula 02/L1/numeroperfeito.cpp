#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int X;
        cin >> X;

        int soma = 0;
        for (int i = 1; i <= X / 2; ++i) { 
            if (X % i == 0) {
                soma += i;
            }
        }

        if (soma == X) {
            cout << X << " eh perfeito" << endl;
        } else {
            cout << X << " nao eh perfeito" << endl;
        }
    }

    return 0;
}