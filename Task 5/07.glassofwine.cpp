// 07.glassofwine.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    const int side = 5;
    int cnt = 0;
    bool reversed = false;

    for (int row = 0; row < side; row++) {
        for (int spaces =  cnt + side; spaces > 0; spaces--) {
            cout << ' ';
        }
        for (int i = side*2 - (cnt * 2 - 1); i > 0; i--) {
                cout << '*';
        }
        cnt++;
        cout << endl;
    }

    for (int i = side-1; i > 0; i--) {
        for (int spaces = side + side; spaces > 0; spaces--) {
            cout << ' ';
        }
            cout << '*' << endl;
    }

    cnt = side;

    for (int row = (side+1)/2; row > 0; row--) {
        for (int spaces = cnt + side; spaces > 0; spaces--) {
            cout << ' ';
        }
        for (int i = side*2 - (cnt * 2 - 1); i > 0 ; i--) {
                cout << '*';
        }
        cnt -= 3;
        cout << endl;
    }
    

    return 0;
}