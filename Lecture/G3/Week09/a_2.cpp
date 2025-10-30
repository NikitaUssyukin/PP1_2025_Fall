/*
Functions

What is a function?
*/

#include <iostream>

using namespace std;

int a_minus_b(int a, int b) {
    int c = a - b;
    return c;
}

int main() {

    cout << a_minus_b(9, 2) << endl;
    cout << a_minus_b(2, 9) << endl;

    return 0;
}