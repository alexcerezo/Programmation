// 13.position.cpp
// Alejandro Cerezo Contreras 19-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int number = 9999;
    int digit = 5;
    int n = 0;

    for (int i = digit; i > 0; i--) {
        n = number%10;
        number /= 10;
    }

        cout << n << endl;


    return 0;
}