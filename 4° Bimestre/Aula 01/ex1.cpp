#include <bits/stdc++.h>

using namespace std;

int main(){
    int N = 0;
    cout << "Insira o valor de N:" << endl;
    cin >> N;
    ofstream fout("labirinto.txt");
    if(fout.is_open()){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= 6; j++){
                if( i == 1 || j == 6 || j == 1 || i == 6){
                    fout << "#";
                } else fout << ".";
            }
            if(i < N) fout << endl;
        }
    }
    fout.close();
    return 0;
}