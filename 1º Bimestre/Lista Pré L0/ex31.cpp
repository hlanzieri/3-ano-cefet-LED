#include <bits/stdc++.h>

using namespace std;

typedef struct {
    double x, y;
    double raio;
} Circulo;

void move_x(Circulo &c) {
    double deslocamento_x;
    cout << "Digite o deslocamento em x: ";
    cin >> deslocamento_x;
    c.x += deslocamento_x;
}

void move_y(Circulo &c) {
    double deslocamento_y;
    cout << "Digite o deslocamento em y: ";
    cin >> deslocamento_y;
    c.y += deslocamento_y;
}

int main () {
    Circulo c1;
    cin >> c1.x >> c1.y >> c1.raio;
    move_x(c1);
    move_y(c1);
    cout << "<(" << c1.x << ", " << c1.y << ") " << c1.raio << ">" << endl;
    return 0;
}