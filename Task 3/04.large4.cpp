// 04.large4.cpp
// Alejandro Cerezo Contreras 09-10-2023
// A program that asks for four numbers and prints the largest one.

#include <iostream>
using namespace std;


int main() {

    int a, b, c, d;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter another number: ";
    cin >> c;
    cout << "Enter another number: ";
    cin >> d;

    if (a > b and a > c and a > d) {
        cout << "The largest number is: " << a << endl; 
    }
    else if (b > a and b > c and b > d) {
        cout << "The largest number is: " << b << endl;
    } 
    else if (c > a and c > b and c > d) {
        cout << "The largest number is: " << c << endl;
    }
    else if (d > a and d > b and d > c) {
        cout << "The largest number is: " << d << endl;
    }
    else {
        cout << "The numbers are equal" << endl;
    }

    return 0;
}