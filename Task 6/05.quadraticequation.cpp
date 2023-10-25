// 05.quadraticequation.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
#include <cmath>
using namespace std;

void quadEq ( float a, float b, float c, float & x1 , float & x2, int & type) {
    
    float discriminant = (b * b) - (4 * a * c);


    if ( a == 0 and b == 0 and c == 0) {
        type = 6;
    } else if (a == 0 and b == 0 and c != 0) {
        type = 5;
    } else if ( a == 0 and b != 0) {
        type = 4;
        x1 = x2 = -c/b;
    } else if ( discriminant == 0) {
        type = 3;
        x1 = x2 = -b / (2*a);
    } else if (discriminant > 0) {
        type = 1; // Two different real numbers
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
    } else {
        type = 2; // Real/integer parts of a conjugated complex number
        float realPart = -b / (2*a);
        float imagPart = sqrt(abs(discriminant)) / (2*a);
        x1 = realPart;
        x2 = imagPart;
    }

}

int main() {

    float a, b, c;
    float x1, x2;
    int type;

    cout << "\nTypes: \n (1) two different real numbers\n (2) the real/integer parts of a conjugated complex number\n (3) a double real solution\n (4)a simple number (because a was 0)\n (5) an impossibleequation (a and b but not c zeros)\n (6) a trivial equation (the three, a, b, and c, zeros)\n " << endl;

    cout << "Enter the first coefficient(a): ";
    cin >> a;
    cout << "Enter the second coefficient(b): ";
    cin >> b;
    cout << "Enter the third coefficient(c): ";
    cin >> c;

    quadEq(a, b, c, x1, x2, type);


    if (type == 6){
        cout << "The equation has infinite solutions and type is " << type << endl;
    } else if (type == 5){
        cout << "The equation has no solutions and type is " << type << endl;
    } else if (type == 4){
        cout << "The solution is " << x1 << " and type is " << type << endl;
    } else if (type == 3){
        cout << "The solution is " << x1 << " and type is " << type << endl;
    } else if (type == 2) {
        cout << "The solutions are " << x1 << " +" << x2 << "i and " << x1 << " -" << x2 << "i and type is " << type << endl;
    } else {
        cout << "The solutions are " << x1 << " and " << x2 << " and type is " << type << endl;
    }

    return 0;
}