// numberofdivisors.cpp
// Alejandro Cerezo Contreras 26-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    long long int number = 29338848000;
    double cnt = 0;

    for (long long int i = 1; i < number; i++) {
        if (number % i == 0) {
            cnt++;
        cout << cnt << endl;
        }
    }


        return 0;
}