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
    int a = 5; // in bin: 0000 0000 0000 0000 0000 0000 0000 0101
    
    cout << ~a << endl;
    // ~0000 0000 0000 0000 0000 0000 0000 0101 ->
    // -> 1111 1111 1111 1111 1111 1111 1111 1010

    return 0;
}