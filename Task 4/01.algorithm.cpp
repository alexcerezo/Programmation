// 04.algorithm.cpp
// Alejandro Cerezo Contreras 11-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int N = 0, s = 0, sum = 0, cnt = 0;
    cout << "Enter the number of values of the series: ";
    cin >> N;
    cout << "Enter the values of the series: ";

    for (int i = N; i > 0; i--){
        cin >> s;
        sum += s;
        N--;
        cnt++ ;
    }

    int avg = (float) sum / cnt + 0.5;
    cout << "The sum of the series is: " << sum << endl;
    cout << "The average of the series is: " << avg << endl;

    return 0;
}