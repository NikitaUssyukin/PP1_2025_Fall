/*
Struct
*/

#include <iostream>

using namespace std;

struct Car {
    string make;
    string model;
    string color;
    string engine;
    double length; // meters
    bool broken;
    string owner;
};

int main() {

    Car cobalt;

    cobalt.make = "Chevrolet";
    cobalt.model = "Cobalt";
    cobalt.color = "white";
    cobalt.engine = "petrol N/A i4 1.5l";
    cobalt.length = 4.5;
    cobalt.broken = true;
    cobalt.owner = "Alikhan";

    cout << cobalt.make << endl;
    cout << cobalt.model << endl;
    cout << cobalt.color << endl;
    cout << cobalt.engine << endl;
    cout << cobalt.length << endl;
    cout << cobalt.broken << endl;
    cout << cobalt.owner << endl;

    return 0;
}