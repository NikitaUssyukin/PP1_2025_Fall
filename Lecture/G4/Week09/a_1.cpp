/*
Functions

What is a function?
*/

#include <iostream>

using namespace std;

int a_plus_b(int a, int b) {
    int c = a + b;
    return c;
}

int main() {

    cout << a_plus_b(7, 2) << endl;

    return 0;
}