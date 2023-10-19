// 12.numberofdigists.cpp
// Alejandro Cerezo Contreras 19-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int number = 1492;
    int digits = 1;

    for (int i = number/10; i != 0; i /= 10) { 
        digits++;
    }

    cout << digits << endl;

        return 0;
}