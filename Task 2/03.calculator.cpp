// 03.calculator.cpp
// Alejandro Cerezo Contreras 29-09-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, r;
    char op;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter a char for the operation: (+-*/^%): ";
    // there still is an 'end of line' or 'enter' '\n'
    // in the input buffer, but the next cin will ignore
    // it, as it ignores all spaces
    cin >> op;
    if (op == '+')
        r = a + b;
    else if (op == '-')
        r = a - b;
    else if (op == '*')
        r = a * b;
    else if (op == '/')
        r = a / b;
    else if (op == '^')
        r = pow(a,b);
    else if (op == '%')
        r = a - (int(a) / int(b)) * b;
    else {
        cout << "Error: wrong operation " << op << " use only: +-*/^%" << endl;
        r = 0;
    }
    cout << "r: " << r << endl;
    return 0;
}