// 04.n-thintenger.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

float powx ( float x, int n) {

    if (n == 0) {
        x = 1;
    } else if (n > 0){
        int m = x;
        for (int i = 1; i < n; i++) {
        x *= m;
        }
    } else {
        int d = x;
        for (int i = 1; i > n; i--) {
        x /= d;
        }
    }

    return x;
}

int main() {

    int n;
    float x;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> n;

    cout << "The number " << x << " to the power " << n << " is " << powx(x, n) << endl;

    return 0;
}