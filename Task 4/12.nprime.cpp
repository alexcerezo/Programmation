// 12.nprime.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int num, helper, i=2;
    bool prime = true;

    cout << "Enter the number of prime numbers you want to know: ";
    cin >> num; 

    while (num > 0) {
        helper = 2;
        prime = true;
        while ( i/2 >= helper) {
            if ( i % helper == 0 )  {
                prime = false; 
            }
            helper++;
        }
        if (prime == true) {
            cout << i << " ";
            num--;
        }
        i++;
    }

    return 0;
}