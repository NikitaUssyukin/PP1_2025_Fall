/*
Struct
*/

#include <iostream>

using namespace std;

struct Animal {
    int age;
    int height;
    string name;
};

int main() {

    Animal a;

    cin >> a.age >> a.height >> a.name;

    cout << a.age << " " << a.height << " " << a.name;
    cout << "\n";

    return 0;
}