// 03.doublemptysquare.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    const int side = 6;
    int cnt = 0;

    for (int i = 0; i < side; i++) {

        if (cnt <= 1 or cnt >= (side - 2)) {
            for(int k = 0; k < side; k++){
                cout << '*';
            }
        }
        else {
            cout << "**";
            for(int k = 0; k < (side - 4); k++){
                cout << ' ';
            }
            cout << "**";
        }
        cout << endl;
        cnt++;
    }
    return 0;
}