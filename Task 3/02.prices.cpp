// 02.prices.cpp
// Alejandro Cerezo Contreras 09-10-2023
// A company sells a product whose price is 100€. The company offers a discount of 5% for each unit purchased, but the discount is not applied to the first unit. Write a program that asks for the number of units purchased and calculates the total price of the purchase.


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int units, finalPrice;
    const int price = 100;
    const int discount = 5;

    cout << "Enter the number of units (100€ each - 5% per unit added until 4): ";
    cin >> units;

    if (units <= 4)
        finalPrice = units * (price - discount * (units - 1 ) );
    else
        finalPrice = units * (price - discount * 3);

    cout << "Quantity: " << units << endl;
    cout << "Total: " << finalPrice << endl;

    return 0;
}