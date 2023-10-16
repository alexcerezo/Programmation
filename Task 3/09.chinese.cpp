// 09.chinese.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 12 == 0) {
        cout << "Your Zodiac sign: monkey." << endl;
    }
    else if (year % 12 == 1) {
        cout << "Your Zodiac sign: rooster." << endl;
    }
    else if (year % 12 == 2) {
        cout << "Your Zodiac sign: dog." << endl;
    }
        else if (year % 12 == 3) {
        cout << "Your Zodiac sign: pig." << endl;
    }
        else if (year % 12 == 4) {
        cout << "Your Zodiac sign: rat." << endl;
    }
        else if (year % 12 == 5) {
        cout << "Your Zodiac sign: ox." << endl;
    }
    else if (year % 12 == 6) {
        cout << "Your Zodiac sign: tiger." << endl ;
    }
    else if (year % 12 == 7) {
        cout << "Your Zodiac sign: rabbit." << endl;
    }
    else if (year % 12 == 8) {
        cout << "Your Zodiac sign: dragon." << endl;
    }
    else if (year % 12 == 9) {
        cout << "Your Zodiac sign: snake." << endl;
    }
    else if (year % 12 == 10) {
        cout << "Your Zodiac sign: horse." << endl;
    }
    else if (year % 12 == 11) {
        cout << "Your Zodiac sign: goat." << endl ;
    }
    else {
        cout << "Invalid." << endl;
    }

    return 0;
}