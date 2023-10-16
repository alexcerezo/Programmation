// gero.cpp
// Alejandro Cerezo Contreras 10-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int i, c;
    i = 280;
    c = 0;

    while (i >= 0) {
        c = c + i;
        i--;
    }
    c = c + 150;

    cout << c << endl;
    cout << c / 281;
    return 0;
}