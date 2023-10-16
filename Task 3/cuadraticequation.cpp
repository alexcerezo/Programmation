// cuadraticequation.cpp
// Alejandro Cerezo Contreras 02-10-2023 (I made it in class while you were explaining it as a exammple)
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    double x1, x2, xi;


    cout << "Enter the value of a: ";
    cin >> a;
    
    while (a == 0) {
        cout << "The value of a cannot be 0, enter the value of a: ";
        cin >> a;
    }
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    if (x1 == x2) {
                cout << "The solution is " << x1 << endl;
    }
    else if (b*b - 4*a*c < 0) {
        x1 = -b / (2*a);
        xi = sqrt(4 * a * c - b * b) / (2 * a);
        x2 = -b / (2 * a);
        if ((x1==0) and not(xi == 1 or xi == -1)) {
            cout << "The solutions are " << xi << "i and " << " -" << xi << "i" << endl;  
        }
        else if (xi == 1 or xi == -1){
            cout << "The solutions are i and -i." << endl;
        }
        else {
            cout << "The solutions are " << x1 << " + " << xi << "i and " << x2 << " - " << xi << "i" << endl;  
        }
    }
    else 
        cout << "The solutions are " << x1 << " and " << x2 << endl;

    return 0;
}