// 19.algorithm.cpp
// Alejandro Cerezo Contreras 12-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int n = 5, r;
    bool win;

    while (n<10) {
        cout << "Enter the number of objects (10 min): ";
        cin >> n;
    }

    while (n > 1) {
        cout << "Enter the number of objects you want to remove(1-3): ";
        cin >> r;
        while (n - r < 1 or r > 3 or r < 1) {
            cout << "Enter the number of objects you want to remove(1-3), you can't overpass the number of objects: ";
            cin >> r;
        }
            
        win = false;
        n = n - r;
        cout << "There are " << n << " objects." << endl;

        if ( (n-1)%4 == 0) {
            cout << "The computer removes 1 object." << endl;
            n = n - 1;
            cout << "There are " << n << " objects." << endl;
        } else {
            cout << "The computer removes " << (n-1)%4 << " object." << endl;
            n = n - (n-1)%4;
            cout << "There are " << n << " objects." << endl;
        }
        
        win = true;
    }

    if (win) {
        cout << "I win!";
    } else {
        cout << "You win!";
    }

    return 0;
}