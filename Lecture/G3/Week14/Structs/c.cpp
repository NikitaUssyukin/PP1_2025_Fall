/*
Struct
*/

#include <iostream>

using namespace std;

struct Food {
    int weight;
    string name;
    string cuisine;
    int calories;
    string age;

    Food(int weight, string name, string cuisine, int calories, string age) {
        this->weight = weight;
        this->name = name;
        this->cuisine = cuisine;
        this->calories = calories;
        this->age = age;
    }

    void print() {
        // cout << this << endl;
        cout << (*this).weight << endl;
        cout << this->name << endl;
        cout << this->cuisine << endl;
        cout << this->calories << endl;
        cout << this->age << endl;
    }
};

int main() {

    Food manty(5, "Manty", "Kazakh", 10000, "1759 years");

    // cout << &manty << endl;

    manty.print();

    return 0;
}