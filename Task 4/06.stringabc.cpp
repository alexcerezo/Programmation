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

    while (c != '.' and h != 3) {
        if (c == 'a') {
            h++;
        } 
        else if (h == 1 and c == 'b') {
            h ++;
        } 
        else if (h == 2 and c == 'c') {
        h++;
        } 
        else {
            h = 0;
        }
        c = cin.get();
    }
    
    if (h != 3) {
        cout << "The string abc is not in the sentence." << endl;
    } else {
        cout << "The string abc is in the sentence." << endl;
    }

    return 0;
}