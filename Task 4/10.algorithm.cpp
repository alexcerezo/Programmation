// 10.algorithm.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int i = 0, n;

    cout << "Enter the number you want to know if it is a perfect square: ";
    cin >> n;

    while (i*i<n){
        i++;
    }

    if (i*i == n){
        cout << "The number " << n << " is a perfect square, and it's square root it's " << i << endl;
    } else {
    cout << "The number " << n << " is not a perfect square" << endl;
    }


    return 0;
}