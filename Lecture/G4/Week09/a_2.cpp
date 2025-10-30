/*
Functions

What is a function?
*/

#include <iostream>

using namespace std;

void a_plus_b(int a, int b) {
    int c = a + b;
    cout << c << endl;
}

int main() {

    a_plus_b(7, 2);

    return 0;
}