// readingasentence.cpp
// Alejandro Cerezo Contreras 25-10-2023
// Description

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() 
{ 
    string str = "Journal Dev reverse example"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}