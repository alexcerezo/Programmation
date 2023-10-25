// 16.reversedword.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description


#include <iostream>
using namespace std;

bool first = true;

void reversedWord(char word) {

    if (word != '.') {
        cin >> word;
        reversedWord(word);
    } 

    if (first==true) {
        cout << "The reversed word is: ";
        first = false;
    }

    if (word != '.') {
        cout << word;
    } 

}

int main() {

    char word = ' ';

    cout << "Enter a word( dot will stop): ";

    reversedWord(word);

    return 0;
}