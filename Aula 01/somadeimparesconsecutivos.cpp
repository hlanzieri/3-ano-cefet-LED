#include <iostream>
using namespace std;

int main() {
    int x, y, somai = 0;
    cin >> x >> y;
    if (x > y) {
        swap(x, y);
    }
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            somai += i;
        }
    }
    cout << somai << endl;
    return 0;
}