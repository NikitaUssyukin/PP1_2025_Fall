/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;

    int* ptr = &a;

    *ptr = 8;

    cout << a << endl;

    int b = 7;

    ptr = &b; // new address assigned to ptr

    *ptr = 49;

    cout << b << endl;

    return 0;
}