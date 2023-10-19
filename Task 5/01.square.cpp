// 01.square.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    const int side = 4;

    for (int i = 0; i < side; i++)
    {
        for (int i = 0; i < side; i++) { /*Yes, you could use the same index for both fors. */
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}