// 01.function.cpp
// Alejandro Cerezo Contreras 04-11-2023
// Description

#include <iostream>
using namespace std;

int digitAtp (int n, int pos ) ;

int main () {
cout << digitAtp (1492 , 1) << endl;
cout << digitAtp (1492 , 3) << endl;
cout << digitAtp (1492 , 6) << endl;
return 0;
}

int digitAtp (int n, int pos ) {
    for (int i = 1; i < pos; i++) {
        n /= 10;
    }
    n %= 10;
    return n;
}