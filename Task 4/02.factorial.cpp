// 02.factorial.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int i, s = 1;

    cout << "Enter a number: ";
    cin >> i;

    while (i > 0) {
        s *= i;
        i--;
    }

    cout << "The factorial of the number is: " << s << endl;

    return 0;
}