// readingaword.cpp
// Alejandro Cerezo Contreras 25-10-2023
// Description

#include <iostream>
using namespace std;

void reverseword(string word) {

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == '.') {
            word.erase(i, word.length() - i);
        }
    }

    if (word.length() == 1) {
        cout << word.back();
        return;
    } else if (word.back() == '.') {
        word.pop_back();
        reverseword(word);
    } else {
        cout << word.back();
        word.pop_back();
        reverseword(word);
    }
}


int main () {
    string word ("hello world.hola.hola.");
    reverseword(word);

  return 0;
}