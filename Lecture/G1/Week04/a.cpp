/*
Decimal - base 10, has 10 digits, from 0 to 9
Binary - base 2, has 2 digits (bits), 0 and 1
Hexadecimal - base 16, has 16 digits, from 0 to 9, from A to F

Converting from any numeric system to decimal

    Decimal: 7315 -> 7 * 10^3 + 3 * 10^2 + 1 * 10^1 + 5 * 10^0 = 7315
Hexadecimal: 7315 -> 7 * 16^3 + 3 * 16^2 + 1 * 16^1 + 5 * 16^0 = 28672 + 768 + 16 + 5 = 29461 

Converting from decimal to any other numeric system:

from dec to bin:

25 / 2 = 12 (remainder: 1)
12 / 2 = 6 (remainder: 0)
6 / 2 = 3 (remainder: 0)
3 / 2 = 1 (remainder: 1)
1 / 2 = 0 (remainder: 1)

25 in binary is: 11001

bin2dec: 11001 -> 1 * 2^4 + 1 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0
16 + 8 + 0 + 0 + 1 = 25
*/

#include <iostream>

using namespace std;

int main() {

    int a = 3; // in binary: 0011
    int b = 5; // 0101

    // bitwise operations
    cout << (a & b) << endl; // 0001 (bin) or 1 (dec)
    cout << (a | b) << endl; // 0111 (bin) or 7 (dec)
    cout << (a ^ b) << endl; // 0110 (bin) or 6 (dec)

    return 0;
}