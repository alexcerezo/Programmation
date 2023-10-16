// 08.astro.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int month, day;
    string sign;
    cout << "Enter your date of birth (DD MM): ";
    cin >> day >> month;

    if (month == 3 and day >= 21 or month == 4 and day <= 19) {
        cout << "Your astrological sign is aries";
    } else if (month == 4 and day >= 20 or month == 5 and day <= 20) {
        cout << "Your astrological sign is taurus";
    } else if (month == 5 and day >= 21 or month == 6 and day <= 20) {
        cout << "Your astrological sign is gemini";
    } else if (month == 6 and day >= 21 or month == 7 and day <= 22) {
        cout << "Your astrological sign is cancer";
    } else if (month == 7 and day >= 23 or month == 8 and day <= 22) {
        cout << "Your astrological sign is leo";
    } else if (month == 8 and day >= 23 or month == 9 and day <= 22) {
        cout << "Your astrological sign is virgo";
    } else if (month == 9 and day >= 23 or month == 10 and day <= 22) {
        cout << "Your astrological sign is libra";
    } else if (month == 10 and day >= 23 or month == 11 and day <= 21) {
        cout << "Your astrological sign is scorpio";
    } else if (month == 11 and day >= 22 or month == 12 and day <= 21) {
        cout << "Your astrological sign is sagittarius";
    } else if (month == 12 and day >= 22 or month == 1 and day <= 19) {
        cout << "Your astrological sign is capricorn";
    } else if (month == 1 and day >= 20 or month == 2 and day <= 18) {
        cout << "Your astrological sign is aquarius";
    } else if (month == 2 and day >= 19 or month == 3 and day <= 20) {
        cout << "Your astrological sign is pisces";
    } else {
        cout << "Invalid date of birth.";
    }

    return 0;
}
