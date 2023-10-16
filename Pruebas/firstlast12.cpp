// firstlast12.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int n, cnt;
    int first = 0, last = 0;

    cout << "Enter a value for n: ";
    cin >> n;

    while ( n != 0) {
        cout << "Enter a value for n: ";
        cin >> n;
        cnt++;
        if (n == 12) {
            last = cnt;
            if (first == 0) {
                first = cnt;
            }
        }
    }

    cout << "Last: " << last << endl;
    cout << "First: " << first << endl;

        return 0;
}