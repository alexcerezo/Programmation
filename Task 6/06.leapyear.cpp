// 06.leapyear.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    bool leap = false;
    if (year % 4 == 0) {
        leap = true;
        if (year % 100 == 0) {
            leap = false;
            if (year % 400 == 0) {
                leap = true;
            }
        }
    }
    return leap;
}

int main() {

    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << "The year " << year << " is a leap year" << endl;
    } else {
        cout << "The year " << year << " is not a leap year" << endl;
    }

    return 0;
}