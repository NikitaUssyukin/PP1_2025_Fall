/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;

    int* ptr = &a;

    cout << (*&*&a) << endl;
    cout << (&*&*ptr) << endl;

    return 0;
}