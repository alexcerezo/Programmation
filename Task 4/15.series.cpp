// 15.series.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int s = 1, n, f = 1;
    const int MAXPOW = 10;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= MAXPOW; i++) {
        f=f*i;
        s = s + pow(n,i)/f;
    }

    cout << s;
    return 0;
}