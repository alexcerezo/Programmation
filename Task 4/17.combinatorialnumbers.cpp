// 17.combinatorialnumbers.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int fx=1, x, fy=1, y, ft=1, t;

    cout << "Enter a number for x: ";
    cin >> x;
    cout << "Enter a number for y: ";
    cin >> y;

    t = x - y;

    while ( x > 0 ) {
        fx *= x;
        x--;
    }

    while ( y > 0 ) {
        fy *= y;
        y--;
    }
    
    while ( t > 0 ) {
        ft *= t;
        t--;
    }

    cout << fx / (fy * ft);

    return 0;
}