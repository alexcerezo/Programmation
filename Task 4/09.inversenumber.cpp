// 09.inversenumber.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int num, helper = 0, base = 10;
    
    cout << "Enter a number: " ;
    cin >> num;
    cout << "The inverse number is: ";

    while (num > 0) {
        helper = num % base;
        num /= base;
        cout << helper;
    }
    return 0;
}