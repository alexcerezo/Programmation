// 12.nprimes.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

int nprimes(int n) {
    int count = 0;
    int i = 2;
    while (count < n) {
        bool prime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                prime = false;
            }
        }
        if (prime) {
            count++;
        }
        i++;
    }
    return i-1;
}

int main() {

    int n;

    cout << "Enter the prime number you want to know (position): ";
    cin >> n;

    cout << "The " << n << " prime is " << nprimes(n) << endl;

    return 0;
}