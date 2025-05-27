#include <bits/stdc++.h>

using namespace std;

typedef struct {
    double x, y;
    double raio;
} Circulo;

int main () {
    Circulo c1, c2;
    cin >> c1.x >> c1.y >> c1.raio;
    cin >> c2.x >> c2.y >> c2.raio;
    cout << "<(" << c1.x << ", " << c1.y << ") " << c1.raio << ">" << endl;
    cout << "<(" << c2.x << ", " << c2.y << ") " << c2.raio << ">" << endl;

    return 0;
}