// concatenated.cpp
// Alejandro Cerezo Contreras 02-10-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int num;
    char grade;

    cout << "Enter your control score (0-10): ";
    cin >> num;

    if (num >= 9)
        grade = 'A';
    else if (num >= 8)
        grade = 'B';
    else if (num >= 7)
        grade = 'C';
    else if (num >= 6)
        grade = 'D';
    else
        grade = 'F';

    cout << "The grade is: " << grade << endl;
    return 0;
}