// 06.seconds.cpp
// Alejandro Cerezo Contreras 09-10-2023
// Description


#include <iostream>
using namespace std;

int main() {

    int seconds, minutes, hours, days;
    
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    days = hours / 24;
    hours = hours % 24;
    
    cout << "The number of seconds is equal to " << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;   

    return 0;
}