// readingasentence.cpp
// Alejandro Cerezo Contreras 25-10-2023
// Description

#include <iostream>
using namespace std;

bool first = true;
int i = 0;


void reversesentence(string sentence) {

    while (i < sentence.length()) {
        if (sentence[i] == '.') {
            cout << "Frase o palabra al revés: " ;
            sentence.erase(i, sentence.length() - i);
        }
        i++;
    }

    if (sentence.length() == 1) {
        cout << sentence.back();
        return;
    } else if (sentence.back() == '.') {
        sentence.pop_back();
        reversesentence(sentence);
    } else {
        cout << sentence.back();
        sentence.pop_back();
        reversesentence(sentence);
    }
}


int main () {

    string sentence;

    cout << "Introduce una frase o palabra: ";
    cin >> sentence;

    reversesentence(sentence);

  return 0;
}