// 02.booleans.cpp
// Alejandro Cerezo Contreras 25-09-2023
// Booleans with different conditions

#include <iostream>
using namespace std;

int main() {
    char c;
    int x, y;

    // Checks if x is even
    bool isEven = (x % 2 == 0);

    // Checks if x ends in 0
    bool endsiIn0 = (x % 10 == 0);

    // Checks if x ends in 00
    bool endsIn00 = (x % 100 == 0);
    
    // Checks if x has 3 digits
    bool has3digits = ((x / 1000 >= 1) || (x / 1000 <= -1));

    // Checks if x belongs to {3, 4, 5, 6, 7}
    bool belongsToSet1 = (x >= 3 && x <= 7);

    // Checks if x belongs to {1, 2, 3, 7, 8, 9}
    bool belongsToSet2 = (x >= 1 && x <= 3 || x >= 7 && x <= 9);
    
    // Checks if  x belongs to {1, 2, 3, 7, 8, 9}, and at the same time y belongs to {6, 7, 8, 3}
    bool belongsToSetX = (x >= 1 && x <= 3) || (x >= 7 && x <= 9);

    bool belongsToSetY = (y == 6 || y == 7 || y == 8 || y == 3);

    bool bothBelong = belongsToSetX && belongsToSetY;

    // Checks if neither x nor y are greater than 10
    bool greaterthan10X = (x > 10);

    bool greaterthan10Y = (y > 10);

    bool bothgreaterthan10 = greaterthan10X && greaterthan10Y;

    // Checks if c is an uppercase letter
    bool isUppercase = (c >= 'A' && c <= 'Z');

    // Checks if c is a letter
    bool isLetter = ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') );

    // Checks if c is a lowercase vowel (a, e, i, o, u)
    bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');


}