// 15.gcd.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

int gcd(int p, int q) {
    if (p > q) {
        return gcd(p - q, q);
    } else if (p < q) {
        return gcd(p, q - p);
    } else {
        return q;
    }
}

int main() {

    int p;
    int q;

    cout << "Enter a number: ";
    cin >> p;
    cout << "Enter a number: ";
    cin >> q;

    cout << "The gcd of " << p << " and " << q << " is " << gcd(p, q) << endl;

    return 0;
}