#include <bits/stdc++.h>

using namespace std;
/*Desenvolver uma estrutura para representar um quadrado no R2. Utilize o comando
typedef para oferecer um sinônimo (apelido) para a estrutura. Implemente uma função
para calcular a área do quadrado e outra para seu perímetro. Desenvolva um programa
para criar um quadrado, atribuir a ele valores e apresente na tela sua área e seu perímetro.*/

typedef struct {
    double x, y; 
    double lado; 
} Quadrado;

double area_quadrado(const Quadrado &q) {
    return q.lado * q.lado; 
}

double perimetro_quadrado(const Quadrado &q) {
    return 4 * q.lado; 
}

int main () {
    Quadrado q1;
    cout << "Digite as coordenadas do quadrado (x, y) e o comprimento do lado: ";
    cin >> q1.x >> q1.y >> q1.lado;
    cout << "Area do quadrado: " << area_quadrado(q1) << endl;
    cout << "Perimetro do quadrado: " << perimetro_quadrado(q1) << endl;
    return 0;
}