// 09.numericalpiramid.cpp
// Alejandro Cerezo Contreras 19-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int cnt = 1;
    int height = 30;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= cnt; j++) {
            cout << j%10;
        }
        cout << endl;
        cnt++;
    }
        return 0;
}