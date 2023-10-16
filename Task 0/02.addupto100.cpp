// 02.addupto100.cpp
// Alejandro Cerezo Contreras 25-09-2023
// Description


#include <iostream>
using namespace std;

//I have changed the value

const int LIMIT=1000;

int main()
{
    int s, i;
    s = 0;
    i = 1;

    while ( i <= LIMIT ) {
        s = s + i;
        i = i + 1;
    }

    cout << "Sum: " << s << endl;
    return 0;
}
