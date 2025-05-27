#include <bits/stdc++.h>

using namespace std;

double area_circulo(double raio){
    return M_PI * raio * raio; 
}
int main () {
    cout << "Digite o raio do circulo: ";
    double raio;
    cin >> raio;
    cout << "Area do circulo:" << area_circulo(raio) << endl; 
    return 0;
}