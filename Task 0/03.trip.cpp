// 03.trip.cpp
// Alejandro Cerezo Contreras 2023-09-19
// Ask for a distance, an average speed and the leaving hour and minute.
// Compute estimated trip time and arriving hour

#include <iostream>
using namespace std;

int main()
{
    float dist, avspeed, ttotal, startt, arrivet;
    int starth, startmins, arrivh, arrivmins;

    cout << "      dist: "; cin >> dist;
    cout << "   aver. v: "; cin >> avspeed;
    cout << "leav. hour: "; cin >> starth;
    cout << "leav. mins: "; cin >> startmins;

    ttotal  = dist / avspeed;
    startt  = starth * 60 + startmins; // mins
    arrivet = startt + ttotal * 60;    // mins

    arrivmins = (int)arrivet % 60;
    arrivh = arrivet/60;

    cout << "Total estimated elapsed time: " << ttotal << endl;
    cout << "Estimated time of arrival:    " << arrivh << ":" << arrivmins << endl;

    return 0;
}
