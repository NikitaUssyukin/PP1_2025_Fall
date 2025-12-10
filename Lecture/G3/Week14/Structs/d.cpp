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
        cout << this->weight << endl;
        cout << this->name << endl;
        cout << this->cuisine << endl;
        cout << this->calories << endl;
        cout << this->age << endl;
    }

    bool operator==(Food another) {
        return (
            (this->weight == another.weight) &&
            (this->name == another.name) &&
            (this->cuisine == another.cuisine) &&
            (this->calories == another.calories) &&
            (this->age == another.age)
        );
    }
};

int main() {

    Food manty1(5, "Manty", "Kazakh", 10000, "1759 years");
    
    Food manty2 = manty1;

    cout << (manty1 == manty2) << endl;

    return 0;
}