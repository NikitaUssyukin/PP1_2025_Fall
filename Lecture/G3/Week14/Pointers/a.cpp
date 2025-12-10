/*
Pointers

Pointer is a "special" variable that stores the address
as its value
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int* ptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}