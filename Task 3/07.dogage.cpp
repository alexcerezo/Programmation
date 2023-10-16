// 07.dogage.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Dog's years calculator


#include <iostream>
using namespace std;

int main() {

    double DOG_YEARS_EQUIVALENT, dog_years;
    int human_years;

    cout << "Enter the number of human years: ";
    cin >> human_years;

    if (human_years <= 2) {
        DOG_YEARS_EQUIVALENT = 10.5;
        dog_years = human_years * DOG_YEARS_EQUIVALENT;
        cout << "The dog age in dog's years is " << dog_years << endl;
    } else {
        DOG_YEARS_EQUIVALENT = 4;
        dog_years = 21 + (human_years - 2) * DOG_YEARS_EQUIVALENT;
        cout << "The dog age in dog's years is " << dog_years << endl;
    }

    return 0;
}