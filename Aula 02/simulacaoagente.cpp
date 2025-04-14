#include <bits/stdc++.h>
using namespace std;

void DesenharAmbiente (){
    for(int i=0; i<=5;i++){
        cout << "+---";
    }
    cout << "+" << endl;

    for(int i=0; i<=5;i++){
        cout << "|   ";
    }
    cout << "|" << endl;
    
    for(int i=0; i<=5;i++){
        cout << "+---";
    }
    cout << "+" << endl;
}

int main (){
    DesenharAmbiente();
    return 0;
}
