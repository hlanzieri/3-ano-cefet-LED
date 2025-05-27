#include <bits/stdc++.h>

using namespace std;

typedef struct {
    double x, y;
    double raio;
} Circulo;

void mostra_circulo(const Circulo &c) {
    cout << "<(" << c.x << ", " << c.y << ") " << c.raio << ">" << endl;
}

double area_circulo(double raio){
    return M_PI * raio * raio; 
}

double calculo_2p(double raio) {
    return M_PI * 2 * raio; 
}

void define_circulo(Circulo &c) {
    c.x = (rand() % 41 - 20); 
    c.y = (rand() % 41 - 20); 
    c.raio = (rand() % 100 + 1) / 10.0; 
}

int main () {
    Circulo c1;
    define_circulo(c1);
    mostra_circulo(c1);
    cout << "Area do circulo: " << area_circulo(c1.raio) << endl;
    cout << "Perimetro do circulo: " << calculo_2p(c1.raio) << endl;
    return 0;
}