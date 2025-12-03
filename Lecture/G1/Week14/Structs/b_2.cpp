/*
Struct
*/

#include <iostream>

using namespace std;

struct Animal {
    int age;
    int height;
    string name;

    Animal(int age, int height, string name) {
        // cout << this << endl;
        this->age = age;      // same as (*this).age = age;
        this->height = height;
        this->name = name;
    }
};

int main() {

    Animal a(6, 200, "Lobster");
    // cout << &a << endl;

    cout << a.age << " " << a.height << " " << a.name;
    cout << "\n";

    return 0;
}