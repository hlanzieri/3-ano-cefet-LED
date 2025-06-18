#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i+1);
        for(int j = 0; j < v.size(); j++){
            cout << v[j] << " ";
        }
        cout << endl;
    }
    
    v.pop_back();

    for(int i = 0; i < 9; i++){
        v.pop_back();
        for(int j = 0; j <= v.size(); j++){
            cout << v[j] << " ";
        }
        cout << endl;
    }
    return 0;
}