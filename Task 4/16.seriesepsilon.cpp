// 16.seriesepsilon.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    unsigned long long s = 1, n, f = 1;
    const int MAXPOW = 10;
    const float EPSILON = 0.000001;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= MAXPOW; i++) {
        f=f*i;
        if (pow(n,i)/f < EPSILON) {
            cout << "The series has converged.";
            i = MAXPOW + 1;
        }
        s = s + pow(n,i)/f;
    }

    if (!(s==1)) {
        cout << s;
    }
    
    return 0;
}