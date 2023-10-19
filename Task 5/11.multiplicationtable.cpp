// 11.multiplicationtable.cpp
// Alejandro Cerezo Contreras 19-10-2023
// Description

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int height = 10;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height; j++) {
            cout << setw(4) << i*j;
        }
        cout << endl;
    }
        return 0;
}