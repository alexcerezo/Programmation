// sqrts.cpp
// Alejandro Cerezo Contreras 02-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x;
    
    cout << "Enter a number > 0 (0 will end): ";
    cin >> x;

    while ( x > 0) {
        cout << "Sqrt(" << x << ") = " << sqrt(x) << endl;
        cin >> x;
    }
    return 0;
}