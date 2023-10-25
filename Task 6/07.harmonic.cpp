// 07.harmonic.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

double harmonic(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The harmonic sum of " << n << " is " << harmonic(n) << endl;

    return 0;
}