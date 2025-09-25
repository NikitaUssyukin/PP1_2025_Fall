/*
left shift: a << b
shift the bits of a by b positions to the left, filling the right part with 0s
same as multiplication by 2^b

right shift: a >> b
shift the bits of a by b positions to the right, filling the left part with 0s
same as division by 2^b
*/

#include <iostream>

using namespace std;

int main() {

    int a = 32; // 32-bit signed integer
    // 32 bit representation: 
    // 0000 0000 0000 0000 0000 0000 0010 0000

    cout << (a << 2) << endl; 
    // 0000 0000 0000 0000 0000 0000 1000 0000
    cout << (a >> 2) << endl;
    // 0000 0000 0000 0000 0000 0000 0000 1000

    return 0;
}