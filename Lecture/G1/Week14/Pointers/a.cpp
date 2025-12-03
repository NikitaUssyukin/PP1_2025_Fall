/*
Pointers

What is a pointer?

A pointer is a special variable that stores an address
as its value.
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;

    int* ptr = &a;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    return 0;
}