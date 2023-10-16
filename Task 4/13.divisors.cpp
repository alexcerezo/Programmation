// 13.divisors.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int n, i = 1;
    bool divisor = true;

    cout << "Enter a number: " ;
    cin >> n;

    while (n/2 >= i) {
        if (n % i == 0) {
            if (divisor) {
                divisor = false;
                cout << "The divisors of " << n << "are: " ;
            }
            cout << i << " ";
        }
        i++;
    }

    return 0;
}