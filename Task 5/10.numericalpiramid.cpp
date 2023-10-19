// 10.numericalpiramid.cpp
// Alejandro Cerezo Contreras 19-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int height = 5;
    int cnt = 0;
    int number = 1;

    for (int numbers = 1; numbers <= height; numbers++) {
        cnt ++;
        for (int i = cnt; i > 0; i--) {
            cout << number%10;
            number++;
        }
        cout << endl;
    }

        return 0;
}