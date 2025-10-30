/*
Functions

What is a function?
*/

#include <iostream>

using namespace std;

void a_minus_b(int a, int b) {
    int c = a - b;
    cout << c << endl;
    return;
}

int main() {

    a_minus_b(9, 2);
    a_minus_b(2, 9);

    return 0;
}