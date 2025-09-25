/*
bitwise operators
*/

#include <iostream>

using namespace std;

int main() {

    int a = 5; // in bin: 0101
    int b = 3; // in bin: 0011

    cout << (a & b) << endl;
    /*
    0101
    &    = 0001
    0011
    */
    cout << (a | b) << endl;
    /*
    0101
    |    = 0111
    0011
    */
    cout << (a ^ b) << endl;
    /*
    0101
    ^    = 0110
    0011
    */

    return 0;
}