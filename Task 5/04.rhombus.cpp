// 04.rhombus.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    const int side = 4;
    int cnt = side;
    bool reversed = true;

    for (int row = 0; row < (side*2 -1); row++) {
        for (int spaces = cnt - 1; spaces > 0; spaces--) {
            cout << ' ';
        }
        for (int i = 0; i < side*2 - (cnt * 2 - 1); i++) {
                cout << '*';
        }

        if (cnt == 1) {
            reversed = false;
        }

        if (reversed == true) {
            cnt--;
        }
        else {
            cnt++;
        }

        cout << endl;
    }

        return 0;
}