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

    bool operator==(Car another) {
        return (
            (this->make == another.make) &&
            (this->model == another.model) &&
            (this->color == another.color) &&
            (this->engine == another.engine) &&
            (this->length == another.length) &&
            (this->broken == another.broken) &&
            (this->owner == another.owner)
        );
    }
};

int main() {

    Car cobalt1(
        "Chevrolet",
        "Cobalt",
        "white",
        "petrol N/A i4 1.5l",
        4.5,
        true,
        "Alikhan"
    );
    Car cobalt2 = cobalt1;

    cout << (cobalt1 == cobalt2) << endl;

    return 0;
}