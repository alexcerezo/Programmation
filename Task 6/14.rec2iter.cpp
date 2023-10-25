// 14.rec2iter.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

bool f(int n) {
    return n%2 == 1;
}

int g(int n){
    if (n % 2 == 0) {
        return n / 2;
    } else {}
}

void rec (int n) {
    int i = 0;
    int j = 0;
    if (not f(n) ) {
    i = g(n);
    cout << i << " + ";
    rec(g(n));
    }
}

int main() {

    int n;

    cout << "Enter a number type 2^n: ";
    cin >> n;

    cout << "The number is equal to ";
    rec(n);
    cout << " 1" << endl;


    return 0;
}
