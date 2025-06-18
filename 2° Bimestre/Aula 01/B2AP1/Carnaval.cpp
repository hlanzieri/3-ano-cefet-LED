#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<float> carnaval(5);
    float soma = 0;
    for(int i = 0; i < carnaval.size(); i++){
        cin >> carnaval[i];
        soma += carnaval[i];
    }
    float max = carnaval[0];
    for(int i = 1; i < carnaval.size(); i++){
        if(carnaval[i] > max){
            max = carnaval[i];
        }
    }
    float min = carnaval[0];
    for(int i = 1; i < carnaval.size(); i++){
        if(carnaval[i] < min){
            min = carnaval[i];
        }
    }
    cout << fixed << setprecision(1);
    cout << (soma - max - min) << endl;

    return 0;
}