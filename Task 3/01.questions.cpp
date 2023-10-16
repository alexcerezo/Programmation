// 01.questions.cpp
// Alejandro Cerezo Contreras 08-10-2023
// Description

// a) It's not possible because you need a to be 0, but you also need b to be different to a, but it cannot be different to 0, as it will execute P2 if b is not 0.

#include <iostream>
using namespace std;

int main() {


    // b) Supposing a and b are both integers, write a simple boolean expressions that is true when neither of them are greater than 10

    // (a > 10 and b > 10)

    // Demonstration uncoment it to test

    // int a, b;
    // cout << "Enter a: ";
    // cin >> a;
    // cout << "Enter b: ";
    // cin >> b;

    // if (a > 10 and b > 10) {
    //     cout << "Both are greater than 10" << endl;
    // } else if (a > 10 or b > 10) {
    //     cout << "One of them is greater than 10" << endl;
    // } else {
    //     cout << "None of them is greater than 10" << endl;
    // }

    // c) Simplify the next fragment of code:
    // if ( cond ) {
    // T;
    // S;
    // } else {
    // T;
    // U;

    // char T, S, U;
    // bool cond;
 
    // T;
    // if ( cond ) {
    // S;
    // } else {
    // U;

    // d) Simplify the next fragment of code:
    // if ( cond )
    // x = true ;
    // else
    // x = false ;

    // bool x;
    // x = cond;

    // e) Simplify the next fragment of code using the fewest expressions. Please use the reserved words
    // and or not when necessary:
    // if ( age >= 65) {
    // state = RETIRED ;
    // } else {
    // if ( age < 18) {
    // state = MINOR
    // } else {
    // if (( age >= 18) and (age < 65) ) {
    // state = ACTIVE ;
    // }
    // }
    // }

    //int age;
    //string state, RETIRED, MINOR, ACTIVE;

    //if ( age >= 65) {
    //state = RETIRED;
    //} 
    //else if ( age < 18) {
    //state = MINOR;
    //} 
    //else {
    //state = ACTIVE;
    //}
    
    // f ) How many times will the process P will execute in
    // cnt = 0;
    // while ( cnt < 10) {
    // cnt ++;
    // if ( cnt == 10)
    // P;
    // }

    // 1 time

    // g) Examine the following pairs of expressions and determine if they are equivalent. Answer each
    // one with true, of false
    // 1) not ( a == b) a != b true
    // 2) not ((a == b) or (a == c)) (a != b) and (a != c) true
    // 3) not ((a == b) and (c > d)) (a != b) or (c <= d) true
    // 4) not (a and b) a or b true
    // 5) a and b or c a and (b or c) true
    // 6) a and b or c not (a or b and c) true

    // h) What is the value of the boolean variable test after the next sentences referred to aValue:
    // bool test = true ;
    // int n = aValue ;
    // int cnt = 1;
    // while ( cnt ++ <= n)
    // test = not test ;

    // It's not a clear answer, because it will change the value of test n times, and if n is even, it will be false, if it's odd, it will be true.

    return 0;
} 