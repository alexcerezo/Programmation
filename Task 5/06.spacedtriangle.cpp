// 06.spacedtriangle.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    const int side = 6;
    int cnt = side;
    bool reversed = true;

    for (int row = -1; row < side; row++) {
        for (int spaces = cnt-1; spaces < (side-1) and spaces >= 0; spaces--) {
            cout << ".";
        }
        for (int i = 0; i < side - cnt; i++) {
                cout << "*.";
        }


    cnt--;
    cout << endl;
    }
    return 0;
}