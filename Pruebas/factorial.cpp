// factorial.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    unsigned long long factorial; 

    cout << "Enter a number: ";
    cin >> factorial;

    for (int i = factorial - 1; i > 0; i-- ) {
        factorial *= i;
    }

    cout << factorial;

    return 0;
}