/*
Struct
*/

#include <iostream>
#include "Animal.h"

int main() {

    Animal a(6, 200, "Lobster");
    Animal b(300, 1500, "Dragon");

    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;

    return 0;
}