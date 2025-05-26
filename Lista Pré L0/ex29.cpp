#include <bits/stdc++.h>

using namespace std;

double calculo_2p(double raio) {
    return M_PI * 2 * raio; 
}

int main () {
    double raio = 0.0;
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    cout << "Perimetro do circulo: " << calculo_2p(raio) << endl;
    return 0;
}