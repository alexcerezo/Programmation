// 11.prime.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>

using namespace std;

bool isprime(int n) {
    bool prime = true;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            prime = false;
        }
    }
    return prime;
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isprime(n)) {
        cout << "The number " << n << " is prime" << endl;
    } else {
        cout << "The number " << n << " is not prime" << endl;
    }

    return 0;
}