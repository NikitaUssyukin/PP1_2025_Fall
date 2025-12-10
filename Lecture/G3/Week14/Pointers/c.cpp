/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int* ptr = &a;

    *ptr = 5;
    cout << a << endl;

    int b = 9;
    ptr = &b;

    *ptr = 8;
    cout << b << endl;

    return 0;
}