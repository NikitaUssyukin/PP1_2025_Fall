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

    int res = a_plus_b(4, 7);
    cout << res << endl;

    return 0;
}