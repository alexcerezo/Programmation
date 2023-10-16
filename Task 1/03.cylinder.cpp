// 03.cylinder.cpp
// Alejandro Cerezo Contreras 25-09-2023
// Calculator of a cylinder volume

#include <iostream>
using namespace std;

int main() {

    float radio, height;
    float volume;
    const float PI = 3.141592;

    // Ask for the radio of the cylinder
    cout << "Enter the cylinder radio: ";
    cin >> radio;

    // Ask for the height of the cylinder
    cout << "Enter the cylinder height: ";
    cin >> height;

    // Calculates the volume of the cylinder
    volume = PI * radio * radio * height;

    // Show a message with the volume of the cylinder
    cout << "The volume of a cylinder with radio " << radio
    << "and height" << height << " is " << volume << endl;
    return 0;


}