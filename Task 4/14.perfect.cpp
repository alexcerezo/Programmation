// 14.perfect.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int n, sum = 0, i = 1;

    cout << "Enter a number: " ;
    cin >> n;

    while (n/2 /*(There are no odd perfect numbers)*/ >= i) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        cout << "The number " << sum <<" is perfect." ;
    }

    return 0;
}