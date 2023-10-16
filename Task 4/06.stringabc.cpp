// 06.stringabc.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    char c;
    int h;
    cout << "Enter a sentence (dot will end): ";
    cin.get(c);

    while (c != '.' ) {
        if (c == 'a') {
            h = 1;
        } 
        else if (h == 1 and c == 'b') {
            h = 2;
        } 
        else if (h == 2 and c == 'c') {
        cout << "The string abc is in the sentence." << endl;
        h = 3;
        break;
        } 
        else {
            h = 0;
        }
        c = cin.get();
    }
    
    if (h != 3) {
        cout << "The string abc is not in the sentence." << endl;
    }
    return 0;
}