// 09.gravity.cpp
// Alejandro Cerezo Contreras 24-10-2023
// Description

#include <iostream>
using namespace std;

float gravity(float m1, float m2, float d, float period) {
    const float pi = 3.14159265359;
    float g = 6.67428e-11;
    float f = g * m1 * m2 / (d * d) - m2*(d*(4*pi*pi/(period*period)));

    return f;
}

int main() {

    float m1, m2, d, period;

    cout << "Enter the mass of the first object (kg): ";
    cin >> m1;
    cout << "Enter the mass of the object that orbits around the other (kg): ";
    cin >> m2;
    cout << "Enter the distance between the two objects (metres): ";
    cin >> d;
    cout << "Enter the period of the orbit (seconds): ";
    cin >> period;

    cout << "The gravitational force between the two objects is " << gravity(m1, m2, d, period) << endl;

    // A 1kg object and at the surface of the Earth (6.37e6m) has a force of 9.80125N

    return 0;
}