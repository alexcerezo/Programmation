// 06.goldbach.cpp
// Alejandro Cerezo Contreras 04-11-2023
// Description

#include <iostream>
using namespace std;

void checkGoldbach (int from, int to);
bool prime (int n);

int main() {

checkGoldbach (19, 2001);

    return 0;
}

bool prime(int n) {
    bool prime = true;
    for (int i = 2; i < n and prime == true; i++) {
        if (n % i == 0) {
            prime = false;
        }
    }
    return prime;
}

void checkGoldbach (int from, int to) {

    int falseCounter = 0;

    from = from + (from % 2);
    to = to - (to % 2);

    for (int i = from; i <= to; i += 2) { 

        bool first = true;
        int n;
        for (int j = i; j > 0; j--){

            for (int k = j; k > 0 and first == true; k--) {

                n = k;

                if (j + k == i and (prime(j) and prime(k)) == true) {
                    cout << i << " = " << j << " + " << k << endl;
                    first = false;
                }
            }
        }
        if ( n == 1 and first == true ){
                cout << "Goldbach's conjecture is wrong: " << i << endl;
                falseCounter++;
        }
    }

    if (falseCounter == 0) {
        cout << "Goldbach's conjecture is correct." << endl;
    } else {
        cout << "Goldbach's conjecture is wrong." << endl;
    }
}

// If you want to test the "Goldbach's conjecture is wrong." message, 
// you can set i += 1 instead of i += 2 in the first for loop and try 11, 
// which is the first number that doesn't follow the conjecture.
