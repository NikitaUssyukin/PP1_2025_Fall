/*
Notes and common patterns:

Be aware than n represents the position starting from 0
Or in other words, the "power" of the bit we want to influence

Setting a bit: x |= (1 << n) sets bit n.
Clearing a bit: x &= ~(1 << n) clears bit n.
Toggling a bit: x ^= (1 << n) flips bit n.
Checking bit: (x >> n) & 1 returns bit n (0 or 1).
Check if even: (x & 1) == 0 -> true if even.
*/

#include <iostream>

using namespace std;

int main() {

    int a = 3; // 32-bit signed integer
    // 32 bit representation: 
    // 0000 0000 0000 0000 0000 0000 0000 0011

    
    
    // 1 in binary is: 
    // 0000 0000 0000 0000 0000 0000 0000 0001
    // 1 << 3 in binary is:
    // 0000 0000 0000 0000 0000 0000 0000 1000
    // ~(1 << 3) in binary is:
    // 1111 1111 1111 1111 1111 1111 1111 0111
    
    // setting a bit:
    cout << (a | (1 << 3)) << endl;
    int n = 3;
    a |= (1 << n);
    cout << a << endl;

    // clearing a bit (bit masking):
    cout << (a & ~(1 << 3)) << endl;
    n = 3;
    a &= ~(1 << n);
    cout << a << endl;

    // toggling a bit:
    n = 3;
    a ^= (1 << n);
    cout << a << endl;
    cout << (a ^ (1 << 3)) << endl;

    // checking a bit:
    n = 3;
    cout << ((a >> n) & 1) << endl;

    // checking if the number is even:
    cout << ((a & 1) == 0) << endl;

    return 0;
}