// 13.primedecomposition.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

void primeDecomposition (int n) {

    bool first = true;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 and first) {
            cout << i;
            n /= i;
            i--;
            first = false;
        } else if (n % i == 0 and not first) {
            cout << " * " << i;
            n /= i;
            i--;
        }
    }
}

int main() {

    int n; 

    cout << "Enter a number: ";
    cin >> n;

    cout << "The prime decomposition of " << n << " is ";
    primeDecomposition(n);

    return 0;
}