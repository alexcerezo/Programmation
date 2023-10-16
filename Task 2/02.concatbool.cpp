// 02.concatbool.cpp
// Alejandro Cerezo Contreras 28-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a numer: ";
    cin >> num;

    if ((num >= 0) and (num <= 100)) {
        cout << "\033[1mThe number is betwen 0 and 100" << endl;
    } else {
        cout << "The number is not betwen 0 and 100" << endl;
        }
    return 0;
}