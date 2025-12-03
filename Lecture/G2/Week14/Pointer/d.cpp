/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int& ref = a;

    ref = 5;
    cout << a << endl;

    // further code demonstrates
    // that the reference can only
    // be assigned once
    // int b = 9;
    // ref = b;
    // cout << a << endl;

    // ref = 8;
    // cout << b << endl;
    // cout << a << endl;

    return 0;
}