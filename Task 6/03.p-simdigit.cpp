// 03.p-simdigit.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

int digit(int n, int p, int base) {
    int power = 1;
    for (int i = 0; i < p; i++) {
        power *= base;
    }
    return (n / power) % base;
}

int main() {

    int n;
    int p;
    int base;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a position: ";
    cin >> p;
    cout << "Enter a base: ";
    cin >> base;

    cout << "The digit in position " << p << " of the number " << n << " in base " << base << " is " << digit(n, p, base) << endl;

    return 0;
}