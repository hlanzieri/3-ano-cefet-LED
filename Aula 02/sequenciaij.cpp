#include <iostream>
using namespace std;

int main() {
    int I = 1, J = 60;

    while (J >= 0) {
        std::cout << "I=" << I << " J=" << J << std::endl;
        I += 3;
        J -= 5;
    }

    return 0;
}