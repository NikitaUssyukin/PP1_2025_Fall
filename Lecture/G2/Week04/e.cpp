/*
unsigned binary 4-bit integer
max value is 1111 -> 15 in decimal
or 2^4 - 1

unsigned binary 8-bit integer
max value is 1111 1111 -> 255 in decimal
or 2^8 - 1

unsigned - cannot store negative numbers
(has no sign)

taking int as an example:
int is a signed 32-bit integer
1-st bit is used to store the sign (0 for +, 1 for -)
remaining 31 bits are used to store the numeric value

max positive value is 0111 1111 1111 1111 1111 1111 1111 1111 -> 
-> 2147483647 or 2^31 - 1
max negative value is 1111 1111 1111 1111 1111 1111 1111 1111 -> 
-> -1
min negative value is 1000 0000 0000 0000 0000 0000 0000 0000 ->
-> -(2^31) or -2147483648
*/

#include <iostream>

using namespace std;

int main() {

    int a = 3; // 0000 0000 0000 0000 0000 0000 0000 0011

    cout << ~a << endl; // 1111 1111 1111 1111 1111 1111 1111 1100 in binary or 12 in decimal

    return 0;
}