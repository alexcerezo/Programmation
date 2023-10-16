// 03.35'smultiples.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    
    int i = 1500;

    while(i<= 2700){
        if(i % 35 == 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}