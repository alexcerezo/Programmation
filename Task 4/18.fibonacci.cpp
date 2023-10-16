// 18.fibonacci.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;



int main() {

    int n=0, prev = 1, ant = 0, f;

    while(n<0){
    cout << "Enter a position of the fibonacci sequence (0 it's first position): ";
    cin >> n;
    }

    for (int pos = n; pos > 0; pos--) {
        f = prev + ant;
        ant = prev;
        prev = f;
    }

    cout << "The fibonacci number in the position " << n << " is: " << f << endl;

        return 0;
}