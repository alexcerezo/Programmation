// 04.triangle.cpp
// Alejandro Cerezo Contreras 25-09-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float b, c;
    int a;

    // Ask for the length of the triangle legs
    cout << "Enter the length of one of the triangle leg: ";
    cin >> b;
    cout << "Enter the length of one of the other triangle leg: ";
    cin >> c;

    // Calculates and rounds the value of the length of the hypotenuse
    a = sqrt(b*b + c*c) + 0.5;

    // Returns what has been calculated
    cout << "The length of the hypotenuse is: " << a << endl;

    return 0;
}