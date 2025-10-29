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

    int result = a_plus_b(2, 7);

    cout << result << endl;

    return 0;
}