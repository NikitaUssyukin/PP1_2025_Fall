/*
bitwise operators
*/

#include <iostream>

using namespace std;

int main() {

    int a = 10; // in bin: 1010
    int b = 6; // in bin: 0110

    cout << (a & b) << endl;
    /*
    1010
    &    = 0010 (2 in dec)
    0110
    */
    cout << (a | b) << endl;
    /*
    1010
    |    = 1110 (14 in dec)
    0110
    */
    cout << (a ^ b) << endl;
    /*
    1010
    ^    = 1100 (12 in dec)
    0110
    */

    return 0;
}