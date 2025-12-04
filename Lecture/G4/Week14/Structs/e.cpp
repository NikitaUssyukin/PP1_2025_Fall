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

    bool operator<(Car another) {
        if(this->broken == another.broken) {
            return this->length > another.length;
            // longer car is better
        }
        return !(this->broken);
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
    
    Car camry(
        "Toyota",
        "Camry",
        "purple",
        "petrol N/A V6 3.5l",
        5,
        false,
        "Pavel"
    );

    cout << (camry < cobalt) << endl;
    cout << (cobalt < camry) << endl;

    return 0;
}