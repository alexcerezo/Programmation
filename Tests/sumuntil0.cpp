// sumuntil0.cpp
// Alejandro Cerezo Contreras 02-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum, x, y;

    x = 0;
    y = 1;
    sum = 10;

    while (sum > 0) {
        sum = 0;
        cout << "Enter the price (0 will end): ";
        cin >> sum;
        if (sum == 0) {
            sum = x;
            y = y - 1;
            break;
        }
        sum = sum + x;
        x = sum;
        cout << "The sum is " << sum << "€" <<endl;
        y = y + 1;
    }

    float average = static_cast<float>(sum) / y;
    average = round(average * 100) / 100;
    cout << "The average is " << average << "€" <<endl;
    return 0;
}
