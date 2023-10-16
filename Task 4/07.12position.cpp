// 07.12position.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

int first = 0, last = 0, pos = 0, num = 0;

    cout << "Enter the sequence of numbers (0 will end): ";
    cin >> num;

    while (num != 0) {
        pos++;
        if (first == 0 and num == 12) {
            first = pos;
        }
        if (num == 12) {
            last = pos;
        }
        cin >> num;
    }
    
    if (first == 0 ) {
        cout << "The number 12 is not in the sequence, so it's at position:" << first << endl;
    } 
    else if (first == last) {
        cout << "The number 12 is in the sequence but it's only one time at the position: " << first << endl;
    } 
    else {
    cout << "The first and the last position of the number 12 are: " << first << " and " << last << endl;
    }

    return 0;
}