#include <bits/stdc++.h>

using namespace std;

typedef struct {
    double x, y;
    double raio;
} Circulo;

void mostra_circulo(const Circulo &c) {
    cout << "<(" << c.x << ", " << c.y << ") " << c.raio << ">" << endl;
}

int main () {
    Circulo c1;
    cin >> c1.x >> c1.y >> c1.raio;
    mostra_circulo(c1);
    return 0;
}