// 01.subprogram.cpp
// Alejandro Cerezo Contreras 23-10-2023
// Description

#include <iostream>
using namespace std;

bool one (int x, int y) ;
void two (int & x, int y) ;
int three (int x) ;

int main() {

    int a, b, c;
    bool theEnd ;

// if ( one(a, b) );

//Legal

// two(a, b + 3);

// Legal

// theEnd = one(c, 5);

// Legal

// theEnd = two(c, 5);

// Illegal: The function two takes an int reference and an int. 5 is not a reference and cannot be passed as the second argument.

// two(a, three(a));

// Legal

// two(three(b), c);

// Illegal: The function three takes an int and returns an int. The function two takes an int reference and an int. three(b) is not a reference and cannot be passed as the first argument.

// if (three(a));

// Illegal: The function three takes an int and returns an int. three(a) is not a bool and cannot be used as a condition.

// b = three(two(a, 5));

// Illegal: The function two takes an int reference and an int. two(a, 5) is not a reference and cannot be passed as the first argument. The function three takes an int and returns an int. three(two(a, 5)) is not an int and cannot be assigned to b.

// two(4, c);

// Illegal: The function two takes an int reference and an int. 4 is not a reference and cannot be passed as the first argument.

    return 0;

}