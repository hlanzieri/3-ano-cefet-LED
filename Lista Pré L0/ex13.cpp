#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void RecebeValores(int n, vector<int>& V) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        V[i] = rand() % 36 - 15; 
    }
}

int main () {
    int n = 0;
    cin >> n;
    vector<int> V(n);
    RecebeValores(n, V);
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
    return 0;
}