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

        if ((n-1)%4 == 1 and n > 1) {
            win = true;
            n = n-1;
            cout << "The computer removes 1 object." << endl;
            cout << "There are " << n << " objects." << endl;
        } else if ((n-1)%4 == 2 and n >= 2) {
            win = true;
            n = n-2;
            cout << "The computer removes 2 object." << endl;
            cout << "There are " << n << " objects." << endl;
        } else if ((n-1)%4 == 3 and n >= 3) {
            win = true;
            n = n-3;
            cout << "The computer removes 3 object." << endl;
            cout << "There are " << n << " objects." << endl;
        } else if ((n-1)%4 == 0 and n >= 4) {
            win = true;
            n = n-1;
            cout << "The computer removes 1 object." << endl;
            cout << "There are " << n << " objects." << endl;
        } 
    }

    if (win) {
        cout << "I win!";
    } else {
        cout << "You win!";
    }

    return 0;
}