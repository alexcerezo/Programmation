// 03.harmonicalternate.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

double alternate(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i;
        } else {
            sum += 1.0 / i;
        }
    }
    return sum;
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The alternate sum of " << n << " is " << alternate(n) << endl;

    return 0;
}