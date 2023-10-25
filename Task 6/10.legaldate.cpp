// 10.legaldate.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

bool isLegalDay(int year, int month, int day) {
    bool legal = false;
    bool leap;
    int days = 0;

    for (int i = 0; i < year; i++) {
        if (year % 4 == 0 and year % 100 != 0 and year % 400 == 0) {
            days += 366;
            leap = true;
        } else if (year % 4 == 0 and year % 100 == 0) {
            days += 365;
        } else if (year % 4 == 0) {
            days += 366;
            leap = true;
        } else {
            days += 365;
        }
    }

    for (int i = 1; i < month; i++) {
        if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12) {
            days += 31;
        } else if (i == 4 or i == 6 or i == 9 or i == 11) {
            days += 30;
        } else if (i == 2 and leap == true) {
            days += 29;
        } else if (i == 2 and leap == false) {
            days += 28;
        }
    }
        
    days += day;

    if (days%7==1) {
        legal = false;
    }

    return legal;
}

int main() {

    int year;
    int month;
    int day;

    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a day: ";
    cin >> day;

    if (isLegalDay(year, month, day)) {
        cout << "The date " << day << "/" << month << "/" << year << " is a legal date" << endl;
    } else {
        cout << "The date " << day << "/" << month << "/" << year << " is not a legal date" << endl;
    }

    return 0;
}