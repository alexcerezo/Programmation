// 04.charsuntildot.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    char c;
    int i;
    cout << "Enter a sentence (dot will end): ";
    cin.get(c);

    while (c != '.' ) {
        i++;
        c = cin.get();
    }
    cout << "The number of vowels, upper letters and non letter in the sentece is " << i << endl;
    return 0;
}