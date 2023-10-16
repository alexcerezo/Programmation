// sumador.cpp
// Alejandro Cerezo Contreras 25-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int s, i, rest, sum;

    //Ask for a number
    cout << "Enter  a number: ";
    cin >> i;

    //  s is going to be the same number if i is or isn't a pair number. For example: i/2 = 25/2 = 12  i'/2 = 24/2 = 12
    s = i/2;

    //  As we are working with integers, the rest is going to be 0 or 1. This is going to make us know if i is pair
    rest = i % 2;

    //  We sum all the numbers between i and 0. If i is pair (i + 1) * i/2. For example: (100 + 1) * 100/2 = 5050 = 1 + 2 + 3 ... + 100
    sum = s * (i + 1);

    //  If i is not pair, we have to add i because the sum is made for i-1 = s * 2. For example: (100 + 1) * 101 / 2 = 5151 = 1 + 2 + 3 ... +100 + 101  
    if ( rest == 1) {
        sum = s * (s * 2 + 1) + i;
        }

    // we print the result
    cout << "Sum: " << sum << endl;

    return 0;
}