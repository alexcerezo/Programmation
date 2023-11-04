// 03.isPalindromic.cpp
// Alejandro Cerezo Contreras 04-11-2023
// Description

#include <iostream>
using namespace std;


int lenght(int n);
int digitAtp (int n, int pos );
bool isPalindromic(int n);

int main () {

    cout << isPalindromic(1010101);
    return 0;
}

int lenght(int n) {
    int lenght = 0;
    while (n > 0) {
        n /= 10;
        lenght++;
    }
    return lenght;

}

int digitAtp (int n, int pos ) {
    int sum1 = 0;
    int sum2 = 0;
    
    for (int i = pos; i > 0; i--) {
        sum1 = n % 10;
        n /= 10;
    }
    for (int i = 1 + lenght(n) - pos; i > 0; i--) {
        sum2 = n % 10;
        n /= 10;
    }

    return (sum1 - sum2);
}

bool isPalindromic (int n) {
    int l = lenght(n);
    bool palindromic = true;
    for (int i = 1 ; i <= (l + 1) / 2 and palindromic == true; i++) {
        if (not(digitAtp(n, i) == 0)) {
            palindromic = false;
        }
    }
    return palindromic;
}