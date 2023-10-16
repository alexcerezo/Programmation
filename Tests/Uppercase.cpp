// Uppercase.cpp
// Alejandro Cerezo Contreras 27-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (letter >= 'A' && letter <= 'Z' ) {
        cout << "The letter is already uppercase" << endl;
    }

    if (letter >= 'a' && letter <= 'z') {
        letter = letter - ('a' - 'A');
        cout << "The uppercase letter is " << letter << endl;
    }

    return 0;
}