// 04.deMorgan.cpp
// Alejandro Cerezo Contreras 29-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int x,y;

    cout <<  "Enter one number: ";
    cin >> x;
    cout <<  "Enter another number: ";
    cin >> y;

    cout << "The bool of not ( x < y and y > 5) is: " << not ( x < y and y > 5) << endl;
    cout << "The bool of not ( x < y and y > 5) which is also the bool of ( x >= y or y <= 5) is: " << ( x >= y or y <= 5) << endl;
    return 0;
}