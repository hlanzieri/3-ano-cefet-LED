#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0 || N >= 46) {
        return 0; 
    }

    int a = 0, b = 1;

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " "; 
        }
        cout << a;
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}