#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int MaiorAB = (a + b + abs(a - b)) / 2;
    int Maior = (MaiorAB + c + abs(MaiorAB - c)) / 2;
    cout << Maior << " eh o maior" << endl;
    return 0;
}