// 02.numberofdigits.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

int numdigits(int n, int base) {
    int digits = 0;
    while (n > 0) {
        n /= base;
        digits++;
    }
    return digits;
}

int main() {

    int n;
    int base;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a base: ";
    cin >> base;

    if (n == 0) {
        cout << "The number " << n << " has 1 digit in base " << base << endl;
    } else{
        cout << "The number " << n << " has " << numdigits(n, base) << " digits in base " << base << endl;
    }
    

    return 0;
}