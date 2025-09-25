/*
bitwise operators
*/

#include <iostream>

using namespace std;

int main() {

    // int - signed 32 bit integer value
    // 1st bit - sign bit (0 means +, 1 means -)
    // remaining 31 bits store the numeric value
    // range of values: from -(2^31) to 2^31 - 1
    // 1000 0000 0000 0000 0000 0000 0000 0000 - in dec -(2^31)
    // 1111 1111 1111 1111 1111 1111 1111 1111 - in dec -1
    int a = 10; // in bin: 0000 0000 0000 0000 0000 0000 0000 1010
    
    cout << ~a << endl;
    // ~0000 0000 0000 0000 0000 0000 0000 1010 ->
    // -> 1111 1111 1111 1111 1111 1111 1111 0101 (-11 in dec)

    return 0;
}