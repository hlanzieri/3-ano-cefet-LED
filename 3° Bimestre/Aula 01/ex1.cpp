#include <bits/stdc++.h>

using namespace std;

/*
bool existe(vector<int>v, int valor){
    for(int i : v){
        if(i == valor){
            return true;
        }
    }
    return false;
}

int main () {
    srand(time(0));
    vector <int> distintos;
    while(distintos.size() < 15){
        int num = 1 + rand()% 20;
        if(!existe(distintos, num)){
            distintos.push_back(num);
        }
    }
    for(int d : distintos){
        cout << d << " ";
    }
    cout << "Após ordenação: " << endl;
    sort(distintos.begin(), distintos.end());
    for(int d : distintos){
        cout << d << " ";
    }
    cout << endl;
    return 0;   
}
*/

int main(){
    srand(time(0));
    set <int> distintos;
    while(distintos.size() != 15){
        int num = rand() % 20 + 1;
        cout << num << " ";
        distintos.insert(num);
    }
    cout << endl;
    for(int d : distintos){
        cout << d << " ";
    }
    cout << endl;
    return 0;
}