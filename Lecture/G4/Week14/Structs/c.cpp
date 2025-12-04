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

    Car(
        string make, 
        string model,
        string color,
        string engine,
        double length, 
        bool broken,
        string owner
    ) {
        // cout << this << endl;
        (*this).make = make; // (*this). is the same as this->
        this->model = model;
        this->color = color;
        this->engine = engine;
        this->length = length;
        this->broken = broken;
        this->owner = owner;
    }

    void print() {
        cout << this->make << endl;
        cout << this->model << endl;
        cout << this->color << endl;
        cout << this->engine << endl;
        cout << this->length << endl;
        cout << this->broken << endl;
        cout << this->owner << endl;
    }
};

int main() {

    Car cobalt(
        "Chevrolet",
        "Cobalt",
        "white",
        "petrol N/A i4 1.5l",
        4.5,
        true,
        "Alikhan"
    );
    // cout << &cobalt << endl;

    cobalt.print();

    return 0;
}