// prime.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
     
    long long signed num, helper = 1;;

    cout << "Enter a number: ";
    cin >> num;

    while(num != helper) {
        helper++;
        if (num % helper == 0 and helper != num) {
            cout << "The number is not prime because it's divisible by: " << helper << endl;
            helper = num;
        }
    }

    if (num == helper) {
        cout << "The number is prime." << endl;
    }
    

    return 0;
}

