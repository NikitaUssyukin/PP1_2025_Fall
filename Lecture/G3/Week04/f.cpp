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
    
    // negating only the first 4 bits:
    // 0000 0000 0000 0000 0000 0000 0000 1111 (15 in decimal)
    // xor_num = pow(2, n) - 1
    // where n is the amount of bits you want to flip
    int xor_num = 15;
    cout << (a ^ xor_num) << endl;
    // 0000 0000 0000 0000 0000 0000 0000 0101 
    // ^                                       = 0000 0000 0000 0000 0000 0000 0000 1010 (10 in decimal)
    // 0000 0000 0000 0000 0000 0000 0000 1111

    return 0;
}