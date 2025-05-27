#include <bits/stdc++.h>

using namespace std;

void gerandonumeros(int n){
    int sort = 0, maior = 0, menor = 0;
    srand(time(0)); 
    for (int i = 0; i < n; i++){
        sort = rand() % 56 - 12; 
        cout << sort << " ";
        if(i == 0){
            menor = sort;
            maior = sort;
        } else{
            if(sort > maior){
                maior = sort;
            }
            if(sort < menor){
                menor = sort;
            }
        }
    }
    cout << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
}

int main(){
    int n = 0;
    while(true){
        cin >> n;
        if( n <= 30 && n>=1){
            break;
        }
    }
    gerandonumeros(n);
    return 0;
}