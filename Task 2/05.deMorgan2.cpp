// 05.deMorgan2.cpp
// Alejandro Cerezo Contreras 29-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
    const int A = 2;
    const int B = 3;
    const int C = 2;
    bool found = true;

    cout << not (found and (A == B) or (A == C)) << endl;
    cout <<  (!found or A != B and A != C ) << endl;

    bool found2 = false;

    cout <<  !found2 or A != B and A != C;

    return 0;
}