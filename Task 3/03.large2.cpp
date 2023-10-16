// 03.large2.cpp
// Alejandro Cerezo Contreras 09-10-2023
// A program that asks for two numbers and prints the largest one.



#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    if (a > b) {
        cout << "The largest number is: " << a << endl; 
    }
    else if (a < b) {
        cout << "The largest number is: " << b << endl;
    } 
    else {
        cout << "The numbers are equal" << endl;
    }
    
    return 0;
}