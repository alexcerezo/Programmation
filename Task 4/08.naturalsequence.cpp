// 08.naturalsequence.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    
    int num, sum;

    cout << "Enter a sequence of numbers (0 will end): ";
    cin >> num;

    while (num != 0 and sum != num) {
        sum += num;
        cin >> num;
    }

    cout << num << endl;
    cout << sum << endl;

    return 0;
}