// 01.circle.cpp
// Alejandro Cerezo Contreras 2023-09-19
// Ask for radio and computes circle surface
// Compile:
//   c++ 01.circle.cpp
// Ejecute (if compiled)
//   ./a.out



#include <iostream>
using namespace std;

const float PI = 3.141592;

int main()
{
    float radio;
    float area;

    cout << "Enter circle radio: ";
    cin >> radio;
    area = PI * radio * radio;

    cout << "The surface of the circle of radio " << radio
         << " is " << area << endl;

    return 0;
}
