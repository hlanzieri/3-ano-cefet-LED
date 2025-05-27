#include <iostream>
using namespace std;
int main(){
    float vet[5];
    for(int i=0; i<6; i++){
        cin >> vet[i];
    }
    int cont = 0;
    for(int i=0; i<6; i++){
        if(vet[i] > 0){
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}