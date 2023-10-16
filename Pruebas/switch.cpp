// switch.cpp
// Alejandro Cerezo Contreras 02-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    char expression;

    cout << "Enter an angle: " ;
    cin >> x;
    cout << "Enter s for sin, c for cos or t for tan: ";
    cin >> expression;

    x = x * M_PI / 180;

    switch (expression) {
    case 's':
        y = sin(x);
        break;
    case 'c':
        y = cos(x);
        break;
    case 't':
        y = tan(x);
        break;
    default:
        cerr << "Unknown expression\n << endl";
        break;
    }

    cout << "The result is " << y << endl ;
    return 0;
}