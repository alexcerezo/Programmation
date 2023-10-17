// 05.algorithm.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int n = 0, s;


    while (n == 0) {
        cout << "Enter the number you want to find in the sequence: ";
        cin >> n;
    }
    cout << "Enter the sequence (0 will end): ";
    cin >> s;

    while (s != 0) {
        if (s == n) {
            cout << "The number " << n << " is in the sequence" << endl;
        }
        cin >> s;
    }
    
    return 0;
}